#include <stdlib.h>
#include <iostream>
#include <string>
#include "player.h"

using namespace std;

int main () {
    WARRIOR playerW("nik", 21, "German");
    playerW.showData();
    playerW.showWeapons();

    //FOR MANY OBJ THAT NEED TO BE ALLOCATED DYNAMICALLY USE POINTER TO OBJ INSTEAD OF CREATING OBJ ITSELF
    WARRIOR warr1("idk", 33, "natio"); //OBJ CREATED WITH AUTOMATIC STORAGE DURATION: DESTROYED WHEN OUT OF SCOPE
    new WARRIOR("nin", 23, "ad");//OBJ CREATED WITH DYNAMIC STORAGE DURATION: DESTROYED ONLY WHEN CALLING delete: AVOID WHEN POSSIBLE AND HAVE TO BE USED WITH SMART POINTERS
    
    //CREATE POINTERS FOR OBJ TO NULL
    WARRIOR *pWarrior2 = nullptr;
    PLAYER *pPlayer2 = nullptr;
    //CREATE OBJA AND SAVE IT INTO POINTER
    pPlayer2 = new PLAYER("idffk", 33, "nafftio");
    //CALL FUNCTION FOR PPLAYER2
    (*pPlayer2).showData();

    //MORE DOWN
    pWarrior2 = new WARRIOR("idaak", 33, "naaatio");
    pWarrior2->showData(); //ALTERNATIVE WAY TO ACCESS OBJ METHODS FORM A POINTER
}