#include <stdlib.h>
#include <iostream>
#include <string>
#include "player.h"

using namespace std;

int main () {
    WARRIOR playerW("nik", 21, "German");
    playerW.showData();
    playerW.showWeapons();
}