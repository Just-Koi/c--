/*
Funkcje

Funkcja jest blokiem kodu który wykonuje się tylko gdy jest wywołana
syntax:
void myFunction() {
    // code block to be executed
}
*/

#include <iostream>
using namespace std;

// Definiujemy funkcję
void eatJellys() {
    for(int jellysToEat = 1; jellysToEat < 101; jellysToEat++){
        cout << jellysToEat << " żelków do zjedzenia nadal mam" <<endl;
    };
};

int main() {
    // wywołujemy funkcję
    eatJellys();

    return 0;
}
