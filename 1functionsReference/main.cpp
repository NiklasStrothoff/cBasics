#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;



void sayHello(); //FUNCTION PROTOTYPE DEFINITION BELOW

int generateNum () {
    return rand();
}

void changeInMain (int &num){ //AWESOME: YOU ONLY HAVE TO ADD & INFRONT OF PARAMETER TO MAKE IT CHANGEABLE
    num *= 2;
}

void changeMyString (string &name){
    name = "clark";
}

int main ( ) {
    int newNum = generateNum();
    string name = "niklas";
    sayHello();

    cout << newNum << "\n";
    changeInMain(newNum);
    cout << "changed: " << newNum << "\n";

    cout << name << "\n";
    changeMyString(name);
    cout << name << "\n";
    
    return 0;
}

void sayHello ( ) {
    cout << "Hello world!!!\n";
}