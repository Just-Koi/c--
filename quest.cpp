#include <iostream>

using namespace std;

int main(){

    int price1 = 10, price2 = 100;
    int *price, *priceSecond;

    price = &price1;
    priceSecond = &price2;

    cout << "Cena 1: " << price1 <<endl;
    cout << "Adres komórki Cena1: " << price <<endl;
    cout << "Cena 2: " << price2 <<endl;
    cout << "Adres komórki Cena2: " << priceSecond <<endl;

    return 0;
}