#pragma once //TELLS COMPILER THAT THE FILE SHOULD ONLY BE ADDED TO EXE ONCE EVEN IF #included IN MULTIPLE FILES
#include <iostream>
#include <string>
#include <stdlib.h>

//CLASS DECLARATION

using namespace std;

class APARTMENT {
    private:
    //ELEMENTS
    string Street;
    int HouseNum;
    string City;
    string Country;
    int Rooms, Floor;

    public://PUBLIC IS NEEDED TO MAKE THE THINGS IN THE CLASS ACCESSIBLE FROM OUTSIDE IT
    //METHODS
    APARTMENT(string street, int num, int rooms, int floor, string city, string country);
    void showData();
};