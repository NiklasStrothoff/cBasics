#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

const int interestsMax = 6;

class PLAYER {
    private: //ELEMENTS AND METHODS THAT ARE ONLY ACCESSIBLE FROM INSIDE THE CLASS NOT FROM OUTSIDE

    public://PUBLIC IS NEEDED TO MAKE THE THINGS IN THE CLASS ACCESSIBLE FROM OUTSIDE IT
        PLAYER();//ONE STANDARD CONSTRUCTOR FOR THE CLASSES THAT INHERITE FROM PLAYER
        PLAYER(string name, int age, string nationality); //ONE COSTUM CONSTRUCTOR FOR CALLING PLAYER DIRECTLY
        //FUNCITON OVERLOADING: ITS POSSIBLE TO HAVE FUNCTIONS WITH THE SAME NAME THAT DO DIFFEREN THINGS
            //IMPORTANT IS THAT THE RETURN VAL OR PARAMETER NEED TO BE DIFFERENT
        void showData();
        virtual string getType();//VIRTUAL TELLS THE FUNCTION TO BE EXECUTED ONLY FOR THIS TYPE OF OBJ AND ANOTHER TYPE OF OBJ HAS THE SAME FUNCTION THAT SHOULD BE EXECUTED FOR IT

    protected: //PRIVATE FOR OUTSIDE BUT PUBLIC FOR CLASSES THAT INHERIT FROM CLASS
        string Name;
        string Nationality;
        int Age;
        void getDOB();
        void getInterests();
         string Interests[interestsMax];
        int DateOfBirth[3];
};


class WARRIOR : public PLAYER { //WARRIOR INHERITS FROM PLAYER (PLAYER IS MOTHER CLASS) PUBLIC NEEDED TO GIVE WARRIOR OBJ ACCES TO PLAYER METHODS
    private: 
        string Weapon[interestsMax];
        int Ammo[interestsMax];
        void inputWeapons();
    public:
        void showWeapons();
        WARRIOR(string name, int age, string nationality);
        virtual string getType();//VIRTUAL TELLS THE FUNCTION TO BE EXECUTED ONLY FOR THIS TYPE OF OBJ AND ANOTHER TYPE OF OBJ HAS THE SAME FUNCTION THAT SHOULD BE EXECUTED FOR IT
    protected:
};