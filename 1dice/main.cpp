#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main ( ) {
    int currNum;
    char againYN = 'y';

    while (againYN != 'n') {
        srand(time(NULL));
        currNum = rand() % 6 +1;
        cout << "You rolled a " << currNum << "\n";
        cout << "Do your want to go again (y/n)? "; cin >> againYN;
    }
    cout << "Thanks";
    
    return 0;
}