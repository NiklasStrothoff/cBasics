#include <stdlib.h>
#include <iostream>
#include <string>
#include "apartment.h"//INCLUDE .h FILE WHERE YOU DECLARED THE CLASS

using namespace std;

//DEFINE THE CLASS METHODS
APARTMENT::APARTMENT(string street, int num, int rooms, int floor, string city, string country){
    Street = street;
    HouseNum = num;
    Rooms = rooms;
    Floor = floor;
    City = city;
    Country = country;
}
void APARTMENT::showData(){
        cout << "The apartment in " << Street << " " << HouseNum << ", "  << City << " "  << Country 
        << ", has "  << Rooms << " rooms and is on the "  << Floor << " floor\n";
}