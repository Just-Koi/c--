/*
Przekazywanie parametrów z referencji

Do funkcji możemy przekazać parametry za pomocą referencji, co pozwana na zmianę wartości zmiennych przekazanych do funkcji jako parametry
syntax:
void myFunction(int &p1) {
    p1++;
}
*/

#include <iostream>
using namespace std;

// Definiujemy funkcję z parametrem amount jako referencja
void eatJellys(int &amount) {
    for( ; amount > 0; amount--){
        cout << amount << " żelków do zjedzenia nadal mam" <<endl;
    };
};

int main() {
    // ustawiamy wartość zmiennej x na 101
    int x = 101;

    // wywołujemy funkcję z parametrem x
    eatJellys(x);

    // wyświetlamy wartość zmiennej x
    cout << "x = " << x << endl;

    return 0;
}