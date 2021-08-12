#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>


using namespace std;

//CREATE STRUCT
struct PERSON {
    string name;
    int age;
    int weight;
    string nationality;
};

int main () {
    //STRUCT
    PERSON niklas, julia;
    niklas.name = "niklas";
    julia.age = 17;
    julia.nationality = "german";

    int age = julia.age;
    //ARRAY
    int num[51];
    bool used[51];
    int sNum[5] = {0, 1, 2, 3, 4};

    //2D ARRAYS
    int max = 8;
    string chess [max][max];

    for(int x = 0; x < max; x++){
        for(int y = 0; y < max; y++){
            chess[x][y] = to_string(x) + '|' + to_string(y) + "  ";
            cout << chess[x][y];
        }
        cout << "\n";
    }

    //TYPE CONVERSTION
    int num1 = 66;
    string myString;
    myString = to_string(num1) + " amazing right :|"; //make something into a STRING
    cout << myString;

    char exp = static_cast<char>(num1); //gives you the ASCII CHAR for num1(66) so B

    //POINTERS
    int num2 = 100;
    int *pNum2 = nullptr; // create new pointer for num2 (pointer always has to be of same variable type) and point to address 0
    cout << &num2; //& gets the address where var is located

    pNum2 = &num2; //put the address of num2 into pNum2

    *pNum2 = 543; //change number using pointer
    



    return 0;
}