/*
Wiele parametrów

Do funkcji możemy przekazać wiele parametrów, nawet różnego typu
syntax:
void myFunction(string p1, int p2) {
    cout << "p1 = " << p1 << endl << "p2 = " << p2 << endl;
}
*/

#include <iostream>
using namespace std;

// Definiujemy funkcję z parametrem amount oraz z parametrem jpm (jellys per minute)
void eatJellys(int amount, int jpm) {
    for(int jellysToEat = 1; jellysToEat < amount; jellysToEat += jpm){
        cout << jellysToEat << " żelków do zjedzenia nadal mam" <<endl;
    };
};

int main() {
    // wywołujemy funkcję z parametrami 101 i 2
    eatJellys(101, 2);

    return 0;
}