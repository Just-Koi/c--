/*
Parametry

Do funkcji możemy przekazać parametry. Parametry w funkcji zachowują się jak zmienne
syntax:
void myFunction(parameter1, parameter2, parameter3) {
    // code block to be executed
}
*/

#include <iostream>
using namespace std;

// Definiujemy funkcję z parametrem amount
void eatJellys(int amount) {
    for(int jellysToEat = 1; jellysToEat < amount; jellysToEat++){
        cout << jellysToEat << " żelków do zjedzenia nadal mam" <<endl;
    };
};

int main() {
    // wywołujemy funkcję z wartością parametru amount 101
    eatJellys(101);

    return 0;
}