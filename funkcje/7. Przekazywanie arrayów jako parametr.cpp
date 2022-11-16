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

<<<<<<< HEAD
// Definiujemy funkcję z parametrem typu array o nazwie flavours
void printJellysFlavours(string flavours[5]) {
    for (int i = 0; i < 5 ; i++) {
        // Wyświetlamy wartość pola o indeksie i
        cout << flavours[i] << endl;
=======
// Definiujemy funkcję z parametrem array
void printArray(int array[5]) {
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
>>>>>>> 59922a5d124d9506ae25a8e12f35980f0a3248bc
    }
}

int main() {
<<<<<<< HEAD
    // Tworzymy arraya typu string z pięcioma typami żelków
    string flavours[5] = {
        "Maliniaki",
        "Owocowe",
        "Fasolki",
        "Paski",
        "Cola"
    };

    // wywołujemy funkcję z podanym arrayem utworzonym powyżej
    printJellysFlavours(flavours);
=======
    // deklaracja arraya x
    int x[5] = {0,1,2,3,4};

    // wywoływanie funkcji printArray z parametrem jako array x
    printArray(x);
>>>>>>> 59922a5d124d9506ae25a8e12f35980f0a3248bc

    return 0;
}