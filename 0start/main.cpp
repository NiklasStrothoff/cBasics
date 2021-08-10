#include <stdlib.h> //standard library functions
#include <iostream> // input output
#include <string> // strings
#include <iomanip> // IO manipulators
#include <time.h> // gives you times

//COMMENT

using namespace std;

int main() {
    string name = "Niklas"; //#include <string>
    bool tf = true;
    int num = 0;
    unsigned int uNum = 1;
    signed int sNum = -1;
    long lNum = 100000000;
    short shNum = 1;
    float fNum = 1.1f;
    double fLNum  = 1.111111111111111111111;
    char letter = 'c';
    string text;
    const float gravity = 9.81; //constants
    num++;
    num += 10;
    //ENUM
    enum colors{red, blue, green, black, white}; // creates a type of colors with possible vaiables in {}
    colors myColor = green; // create a colors variable
    
    //STANDARD CONSOLE INPUT OUTPUT
    cout << "Hello, whats you name? \n";
    cin >> name;
    cout << name;

    //DECIMAL PLACES
    cout << fixed << setprecision(2); // fixed precision of 2 decimal
    cout << fLNum;

    //STRING ADDITION
    text = "your name is" + name + " right?\n";

    //iIF-ELSE
    if(myColor == red){cout << "yay";}
    else if (myColor == green){cout << "nice";}
    else {cout << "what?";}

    //SWITCH
    switch (myColor) {
        case red :
            cout << "amazing";
            break;
        case green :
            cout << "trash \n";
            break;
        default :
            cout << "what you say?";
            break;
    }

    //RANDOM NUMBERS
    int randNum;

    srand(time(NULL)); // set rand seed to current time
    randNum = rand() % 1000 + 1;

    //WHILE
    while(randNum > 300){
        cout << "num1: " << randNum << "\n";
        randNum = rand() % 1000 + 1;
    }

    //DO-WHILE
    do {
        cout << "num2: " << randNum << "\n";
        randNum = rand() % 1000 + 1;
    } while (randNum > 300);

    //FOR
    for (int i = 0; i < 10; i++){
        cout << i << ", ";
    }
    
    //BREAK AND CONTINUE
    int counter = 0;
    while (counter)
    {
        if(counter == 1){continue;} // skips to next iteration
        if(counter == 2){break;} //breaks out of loop completely 
    }
    return 0;
}; 
