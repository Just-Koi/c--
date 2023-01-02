#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/*
    - Klient podaje pieniądze
    - Kasjer sprawdza ilość pieniędzy oraz produkt
    - Odejmuje wartość piniędzy od kosztu produktu
*/
void shopee(string product, int price){
  cout << "Pański produkt to " << product << ", jego koszt to " << price << " zł." <<endl;
}
int main(){
  // Losowa cena dla produktu
  int max;
  max = 10;
  srand(time(0));
  int price = rand()%max;
  shopee("żelki", price);
  // pieniążki klienta 
  int budget;
  cout << "Poproszę o pieniążki " <<endl;
  cin >> budget;
  cout << "Dziękuję za " << budget << " zł." << endl;
  // Wydawanie reszty
  int rest = budget - price;
  if (rest < 0){
    cout << "Proszę o więcej pieniędzy." <<endl;
    cin >> budget;
  } else if (rest == 0){
    cout << "Dziękujęmy za zakupy, dowidzenia :)" <<endl; 
  } else{
    cout << "Dziękujęmy za zakupy, Pańska reszta to " << rest << " zł. Dowidzenia :)" <<endl; 
  }
  // zakończenie
  return 0;  
}