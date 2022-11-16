/*
Przeciążenie funkcji

Przeciążenie funkcji polega na tworzeniu dwóch funkcji o tych samych nazwach, lecz z innymi typami danych. 
Możemy to wykorzystać na przykład w sytuacji funkcji dodawania. 
Funkcja o typie int doda ze sobą dwie wartości int, a funkcja o typie float doda ze sobą dwie wartości o typie float.

syntax:

int a {
    // code block to be executed
}

float a {
    // code block to be executed
}

*/

#include <iostream>
using namespace std;

// Tworzymy funkcję dodaj typu int
int dodaj(int x, int y) {
    // Zwracamy sumę x+y
    return x + y;
}

// Tworzymy funkcję dodaj typu float
float dodaj(float x, float y) {
    // Zwracamy sumę x+y
    return x + y;
}

int main() {
    int x = 1, y = 1;
    float x2 = 0.5, y2 = 0.5;
    cout << dodaj(x, y);
    cout << dodaj(x2, y2);
}
