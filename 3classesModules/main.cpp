#include <stdlib.h>
#include <iostream>
#include <string>
#include "apartment.h"
//MULITPAL FILES IN PROJECT
//it is usual to have a .h file where class and others are declared(telling they exist/creating them) and 
//then second .cpp file where those declared classes, constructors, etc are defined(actual code that is run)

using namespace std;

const int interestsMax = 6;

//CLASS NO CONSTRUCTOR- can hold elements and functions
class PERSON {
    public://PUBLIC IS NEEDED TO MAKE THE THINGS IN THE CLASS ACCESSIBLE FROM OUTSIDE IT
    //ELEMENTS
    string name;
    int age;
    int dateOfBirth[3];
    string nationality;
    string interests[interestsMax];

    //METHODS
    void getBasics(){
        cout << "Enter name: "; cin >> name;
        cout << "Enter age: "; cin >> age;
        cout << "Enter nationality"; cin >> nationality;
    }
    void getDOB(){
        cout << "Enter your date of birht as follow: dd mm yyyy \n";
        cin >> dateOfBirth[0] >> dateOfBirth[1] >> dateOfBirth[2];
    }
    void getInterests(){
        cout << "Enter your interests (max 6) or 0 to finish: \n";
        for(int i = 0; i < interestsMax; i++){
            cout << "Enter interest " << i+1 << " :"; cin >> interests[i];
            if(interests[i] == "0"){break;}
        }
    }
    void showData(){
        cout << name << ", born on the " << dateOfBirth[0] << "." << dateOfBirth[1] << "." << dateOfBirth[2] << " is of " << nationality << " nationality.\n";
        cout << "His interests are ";
        for (int i = 0; i < interestsMax; i++){
            if(interests[i] == "0"){break;}
            cout << interests[i] << " ";
        }
    }
};

class PLAYER {
    private: //ELEMENTS AND METHODS THAT ARE ONLY ACCESSIBLE FROM INSIDE THE CLASS NOT FROM OUTSIDE
        void getDOB();
    void getInterests(){
        cout << "Enter your interests (max 6) or 0 to finish: \n";
        for(int i = 0; i < interestsMax; i++){
            cout << "Enter interest " << i+1 << " :"; cin >> Interests[i];
            if(Interests[i] == "0"){break;}
        }
    }
    public://PUBLIC IS NEEDED TO MAKE THE THINGS IN THE CLASS ACCESSIBLE FROM OUTSIDE IT
    //ELEMENTS
    string Name;
    int Age;
    int DateOfBirth[3];
    string Nationality;
    string Interests[interestsMax];

    //METHODS
    void showData(){
        cout << Name << ", born on the " << DateOfBirth[0] << "." << DateOfBirth[1] << "." << DateOfBirth[2] << " is of " << Nationality << " nationality.\n";
        cout << "His interests are ";
        for (int i = 0; i < interestsMax; i++){
            if(Interests[i] == "0"){break;}
            cout << Interests[i] << " ";
        }
    }
    PLAYER(string name, int age, string nationality){
        Name = name;
        Age = age;
        Nationality = nationality;
        getDOB();
        getInterests();
    }
};
//DECLARE METHOD OUTSIDE CLASS
void PLAYER::getDOB(){
        cout << "Enter your date of birht as follow: dd mm yyyy \n";
        cin >> DateOfBirth[0] >> DateOfBirth[1] >> DateOfBirth[2];
}

int main () {
    /* //CLASS NO CONTRUCTOR
    PERSON person1;
    person1.getBasics();
    person1.getDOB();
    person1.getInterests();
    person1.showData();

    //CLASS WITH CONSTRUCTOR
    PLAYER player1("Dr.Evil", 1000, "Underworld");
    player1.showData();
 */
    //USE EXTERNAL CLASS IMPORTED IN .h
    APARTMENT myApartment("Alwinenstr.", 15, 6, 3, "Wiesbaden", "Germany");
    myApartment.showData();
    return 0;
}