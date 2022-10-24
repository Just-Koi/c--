/*
Domyślny parametr

Do funkcji w przypadku nie podania parametru można przekazać parametr domyślny
syntax:
void myFunction(string p1 = "v1") {
    cout << p1 << "\n";
}
*/

#include <iostream>
using namespace std;

// Definiujemy funkcję z parametrem amount z wartością domyślną 101
void eatJellys(int amount = 101) {
    for(int jellysToEat = 1; jellysToEat < amount; jellysToEat++){
        cout << jellysToEat << " żelków do zjedzenia nadal mam" <<endl;
    };
};

int main() {
    // wywołujemy funkcję bez parametru - do funkcji przekazana zostanie wartość domyślna parametru (101)
    eatJellys();

    return 0;
}