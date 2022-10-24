/*
Przekazywanie arrayów jako parametr

Do funkcji można przekazać arraya jako parametr
syntax:
void myFunction(int jellys[5]) {
    for (int i = 0; i < 5; i++) {
        cout << jellys[i] << endl;
    }
}
*/

#include <iostream>
using namespace std;

// Definiujemy funkcję z parametrem array
void printArray(int array[5]) {
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }
}

int main() {
    // deklaracja arraya x
    int x[5] = {0,1,2,3,4};

    // wywoływanie funkcji printArray z parametrem jako array x
    printArray(x);

    return 0;
}