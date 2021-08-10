#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

const int interestsMax = 6;

//CLASS - can hold elements and functions
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

int main () {

    PERSON person1;
    person1.getBasics();
    person1.getDOB();
    person1.getInterests();
    person1.showData();

    return 0;
}