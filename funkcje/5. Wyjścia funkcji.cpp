/*
Wyjścia funkcji

Funkcje mogą wyprowadzić wartości typu zależnego od typu funkcji, którymi mogą być typy zmiennych, takie jak:
    - void (brak wyjścia)
    - int (liczba całkowita)
    - float / double (liczba zmiennoprzecinkowa)
    - bool (prawda / fałsz)

syntax:
int myFunction(int p1) {
    return p1;
}
*/

#include <iostream>
using namespace std;

// Definiujemy funkcję typu int z parametrem amount
int eatJellys(int amount) {
    
    // zwracamy wartość parametru amount (ilość żelek do zjedzenia)
    return amount;
};

int main() {
    // wyświetlamy wyjście funkcji eatJellys z parametrem 101
    cout << eatJellys(101) << endl;

    return 0;
}