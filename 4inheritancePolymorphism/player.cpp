#include <stdlib.h>
#include <iostream>
#include <string>
#include "player.h"

using namespace std;


PLAYER::PLAYER(string name, int age, string nationality){
    Name = name;
    Age = age;
    Nationality = nationality;
    getDOB();
    getInterests();
}

PLAYER::PLAYER(){}
void PLAYER::getDOB(){
        cout << "Enter your date of birht as follow: dd mm yyyy \n";
        cin >> DateOfBirth[0] >> DateOfBirth[1] >> DateOfBirth[2];
};

void PLAYER::getInterests(){
    cout << "Enter your interests (max 6) or 0 to finish: \n";
    for(int i = 0; i < interestsMax; i++){
        cout << "Enter interest " << i+1 << " :"; cin >> Interests[i];
        if(Interests[i] == "0"){break;}
    }
};

void PLAYER::showData(){
    cout << Name << ", born on the " << DateOfBirth[0] << "." << DateOfBirth[1] << "." << DateOfBirth[2] << " is of " << Nationality << " nationality.\n";
    cout << "His interests are ";
    for (int i = 0; i < interestsMax; i++){
        if(Interests[i] == "0"){break;}
        cout << Interests[i] << " ";
    }
    cout << "He of type " << getType();
    cout << "\n";
};

string PLAYER::getType(){return "Player";}

////////////////////////////////////////////////////////////////////////////////////

WARRIOR::WARRIOR(string name, int age, string nationality){
    Name = name;
    Age = age;
    Nationality = nationality;
    getDOB();
    getInterests();
    inputWeapons();
}

void WARRIOR::inputWeapons(){
    for (int i = 0; i < interestsMax; i++){
        cout << "Enter weapon (max 6) 0 to exit: "; cin >> Weapon[i];
        if(Weapon[i]=="0"){break;}
    }
};
void WARRIOR::showWeapons(){
    cout << "His weapons are: \n";
    for (int i = 0; i < interestsMax; i++){
        if(Weapon[i] =="0"){break;}
        cout << "Weapon #" << i+1 <<" : " << Weapon[i] << "\n";
    }
};

string WARRIOR::getType(){return "Warrior";} 
