#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

const int maxGuesses = 15;

int createRand() {
    int num = rand() % 1000 +1;
    return num;
}

int userGuess(int num) {
    int userNum;
    for (int i = 0; i < maxGuesses; i++) {
        cout << "Guess a number: "; cin >> userNum;
        if(userNum < num) {cout << "Your number is too small! \n";}
        if(userNum > num) {cout << "Your number is too large! \n";}
        if(userNum == num) {break;}
    }
    return userNum;
}

char evalGame(int userNum, int num){
    char answerYN;
    if(userNum == num){
        cout << "Well done!!! " << userNum << " is the number we were looking for.\n";
        cout << "Do you want to play again? (y/n)"; cin >> answerYN;
    }
    else{
        cout << "Sorry :( " << userNum << " is NOT the number we were looking for.\n";
        cout << "Do you want to play again? (y/n)"; cin >> answerYN;
    }

    return answerYN;
}


int main ( ) {
    char againYN = 'y';
    int randNum;
    int userNum;

    srand(time(NULL));

    while (againYN != 'n'){
        randNum = createRand();
        userNum = userGuess(randNum);
        againYN = evalGame(userNum, randNum);
    }
    
    return 0;
}