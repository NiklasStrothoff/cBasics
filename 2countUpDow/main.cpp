#include <stdlib.h>
#include <iostream>

using namespace std;

int main ( ) {
    int current = 1;
    int back = 0;
    
    while (current != 0) {
        if (current == 99){back = 1;}
        if (current == 0){break;}
        if (back == 1) {
            cout << current << "\n";
            current--;
        }
        else{
            cout << current << "\n";
            current++;
        }
    }
    return 0;
}