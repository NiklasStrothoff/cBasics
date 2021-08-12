#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

const int interestsMax = 6;

class PLAYER {
    private:

    public:
        PLAYER();
        PLAYER(string name, int age, string nationality); 
        void showData();
        virtual string getType();

    protected:
        string Name;
        string Nationality;
        int Age;
        void getDOB();
        void getInterests();
         string Interests[interestsMax];
        int DateOfBirth[3];
};


class WARRIOR : public PLAYER { 
    private: 
        string Weapon[interestsMax];
        int Ammo[interestsMax];
        void inputWeapons();
    public:
        void showWeapons();
        WARRIOR(string name, int age, string nationality);
        virtual string getType();
    protected:
};