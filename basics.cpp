// #include <iostream> to plik "header libary". Odpowiada za przypominanie komplikatorowi o rzeczach potrzebnych do zbudowaia pliku
#include <iostream>
#include <string>
#include <cmath>

// sprawia, że możemy używać nazw dla obiektów i zmiennych z biblioteki bez konieczności pisania "std" za każdym razem
using namespace std;

// Funkcje - Narazie je pomij, w późniejszym etapie kodu do nich dojdziesz

void aboutYou(string yourName, int yourAge){
    cout << "twoje imię to " << yourName << " i masz " << yourAge << endl;
}

void itsMe(string name, int age){
    cout << "Mam na imię " << name << " i mam " << age << " lat." <<endl;
}

void hello(){
    cout << "Hej! To podstawy c++. Jeżeli chcesz sobie coś na szybko przypomnieć lub poćwiczyć to zapraszamy! " << endl;
    cout << "Psst.. Jeżeli znajdziesz jakieś błędy lub coś do poprawy to śmiało nas o tym powiadom ;)" <<endl;
    cout << "-Koi, Vulturer" <<endl;
}

// funkcja main

int main(){

    /* 
    cout - wymawiamy, jako "see out". Jak sama nazwa na to wskazuje, sprawia, że możemy zobaczyć jego wynik
    << - sprawiam, że widać wartość wyjściową
    endl - kończy naszą linię
    cout << "Hello World!" << endl;
    */

    hello();

    // \n - tworzy nową linijkę w kodzie
    cout << "Welcome \n Koi" << endl;

    // \t - dodaje taba
    cout << "Welcome \t To Hell.." <<endl;

    // \\ - dodaje ci slasza "\"
    cout << "Mam 5 \\ 2 lat" << endl;

    // \" - dodaje ci podwójnego quota ""
    cout << "\"Witam\"" << endl;

    // \" - dodaje ci pojedynczego quota ""
    cout << "\'Witam\'" << endl;

    /*
    int - przechowuje liczby całe
    double - przechowuje podwójne liczby ( 19.99 - dla przykładu )
    char - przechowuje pojedyncze symbole
    string - przecowuje tekst
    bool - przechowuje dwie wartości: True lub False
    */

    int myYears = 16;
    string myYearsString = "Mam ";
    string myYearStringEnd =  " lat";

    cout << myYearsString << myYears << myYearStringEnd << endl;

    // wartości możemy odzielać od siebie za pomocą przecinka (,)
    int x, y, z;

    cout << "Wpisz wartość liczby X" << endl;
    cin >> x;
    cout << "Wpisz wartość liczby Y" << endl;
    cin >> y;

    z = x + y;
    cout << "Suma tych wartości to " << z << endl;

    // jeżeli dana wartość ma być stała to użyjemy "const" - constant, co oznacza, że przyjmuje stałą wartość, której nie można zmienić

    // za pomocą zmiennej "float" oraz "double" jesteśmy w stanie wpisywać tzw. liczby naukowe
    float f = 37e2;
    double d = 13E5;
    cout << f << " " << d << endl;

    // możesz użyć ASCII by móc wyświetlić daną literę
    char a = 65;
    cout << a << endl;

    /*
    Operatory w C++:

    + - dodawanie
    - - odejmowanie
    * - mnożenie
    / - dzielenie
    % - modulus
    ++ - zwiększenie wartości o 1
    -- - zmniejszenie wartości o 1
    = - przypisuje wartość

    */

    cout << "Zwiększam wartość X o 5" << endl;
    x += 5;

    /*
    Operatory porównuwujące:
    < - mniejsze od
    > - większe od

    zwraca wartość "true" lub "false"
    */

    cout << "Co jest większe ? X, czy Y ? Jeżeli X jest większe to przyjęta wartość będzie równa false (0). Wartość przyjęta to: " << (x < y) << endl;

    /*
    Reszta operatorów:
    == - równe
    != - nie równe
    > - większe od
    < - mniejsze od
    >= - wartość jest równa lub większa od
    <= - wartość jest równa lub mniejsza od
    */

    /*
    Operatory logiczne:
    && - zwraca czy obie wartości są wartościami true
    || - jeżeli jedna wartość jest równa czemuś lub druga wartość też jest czemuś warta to ma zwrócić wynik pozytywny
    ! - logiczne "nie". Zwraca wartość "true" jeżeli wartości nie są sobie równe
    */

    /*
    W C++ znajdują się gotowe funkcję
    Dla przykładu taką gotową funkcją może być funckcja "append()", która, jak sama nazwa wskazuje przydziela wartość
    Kolejnym przykładem jest funkcja "length()", która, jak sama nazwa wskazuje wyświetla nam ilość znaków wartości danej zmiennej
    co ciekawe zamiast "length()" można również użyć "size()". Nie ma tutaj różnicy, ponieważ funkcja size() to alias fukcnji length()
    */

    string myName = "Kacper ";
    string myLastName = "Marciniak";

    string fullName = myName.append(myLastName);
    cout << fullName <<endl;

    cout << "Liczba znaków w fullName: " << fullName.length() << endl;

    /* 
    Możemy używać właściwości array'ów by wyznaczyć dany symbol w wartości
    Oczywiście należy pamiętać o tym, że liczymy od 0, nie od 1
    */

    cout << fullName[15] <<endl;

    /* 
    Warto pamiętać o funckji "getline()", która bierze nam wartość z naszej deklaracji i wyświetla jej wartość, którą potrzebujemy
    getline ({deklaracja}, {zmienna});
    getline (cin, fullName);
    */

    /*
    ---------------- U W A G A -----------------

    Podczas zmieny wartości stringa pamiętaj, aby użyć single quote, nie double!!!
    Jest to ważna wiadomość bo w przeciwnym razie się to pierdzieli !
    Pamiętaj też, że funkcję nie używają formatu pisania "camelCase" - jest to kolejna bezsensowna rzecz
    ,ponieważ zazwyczaj w programowaniu używa się właśnie formatu pisania "camelCase". Zamiast tego jest
    po prostu z małej.

    */

    /* 
    Matematycza funkcja "max" pozwala nam na wyświetlenie największej wartości
    cout << max(5, 10);
    wynik to "10"
    */

    int o, p;
    cout << "Określ wartość dla zmiennej O: " << endl;
    cin >> o;
    cout << "Określ wartość dla zmiennej P: " << endl;
    cin >> p;
    cout << "Największa wartość spośród zmiennych jest równa: " << max(o, p) << endl;

    /*
    Użycie headera <cmath> pozwoli nam na używanie takich funckcji matematycznych, jak: 
    - sqrt ( równania kwadratowe )
    - round ( zaokrągla liczbę )
    - log ( naturalny logarytm )
    - reszta funckji matematycznych tutaj: https://www.w3schools.com/cpp/cpp_math.asp
    */

    cout << "Równanie kwadratowe z 81: " << sqrt(81) <<endl;
    cout << "Przybliżenie wartości 2.45: " << round(2.45) <<endl;
    cout << "Logarytm naturalny z liczby 10: " << log(10) <<endl;

    /* 
    Co ciekawe to jednak Boolean nie posiada tylko dwóch wartości "" w pewnym sensie ""
    Chodzi o to, że oprócz wartości true lub false, składa też wartości on lub off albo yes lub no
    Czyli posiada dwie wartości ( 0 lub 1 ), aczkolwiek posiada też 6 ""przypadków wartości"" - nie wiem, jak to inaczej nazwać
    */

    /*

    Kondycje:

    a < b - jeżeli wartość a jest mniejsza od wartości b
    a <= b - jeżeli wartość a jest mniejsza lub równa wartości b
    a > b - jeżeli wartość a jest większa od wartości b
    a >= b - jeżeli wartość a jest większa lub równa wartości b
    a == b - jeżeli wartość a jest równa wartości b
    a != b - jeżeli wartość a nie jest równa wartości b

    if (kondycja){kod}

    if (kondycja){
        kod
    } else if (kondycja){
        kod
    } else (kondycja){
        kod
    }

    */

    int time = 18;
    if (time > 19){
        cout << "Dobry wieczór " <<endl;
    } else if (time > 21){
        cout << "Dobranoc" <<endl;
    } else if (time < 9 && time > 2){
        cout << "Dobry" <<endl;
    } else {
        cout << "Dzień dobry" <<endl;
    }

    /* 
    Warto pamiętać o syntaxie, a co za tym idzie, skróconej wersji kondycji 
    zmienna = (kondycja) ? jeżeliTak : jeżeliNie;
    */

    (myYears >= 16) ? cout << "Mam ponad 16 lat, więc jedno piwo mi nie zaszkodzi" <<endl : cout << "Za niedługo będę miał 16 lat, napewno!" <<endl;

    /*
    Używamy kondycje switch aby zaznaczyć jeden z wielu bloków kodu do odpalenia
    Syntax:

    switch(expression) {
        case x:
            // code block
            break;
        case y:
            // code block
            break;
        default:
            // code block
    }

    Ekspresja switch jest wywoływana tylko raz
    wartość ekspresji jest porównywana z wartością każdej ekspresji case
    jeżeli się zgadza to wywoła to dany kod bloku
    słowa kluczowe break oraz default są opcjonalne
    */
    
    int haveJellys = 0;
    switch (haveJellys)
    {
    case 0:
        cout << "Kupcie mi żelki ;-;" <<endl;
        break;
    case 1:
        cout << "Mam żelki B-)" <<endl;
        break;
    default:
        cout << "Mam ochotę na żelki ;-;" <<endl;
    }

    /*
    Kiedy c++ dosięga słowa kluczowego break, wtedy "breakuje" (wyłamuje) blok switch
    Zatrzyma dalsze wykonywanie kodu
    Kiedy zrobi swoją robotę (znajdzie parę) zrobi sobie przerwę na kawę :))
    Możemy użyć słowa kluczowego default, aby kod wiedział co zrobić, kiedy nie ma żadnej wartości dla danego case'a

    Pętla while
    Pętla mogą wykonywać blok kodu tak długo, jak określona kondycja zostanie wypełniona
    Syntax:
    while (condition) {
        // code block to be executed
    }
    */

    int loop = 1;
    while (loop < 101)
    {
        cout << loop << " żelków do zjedzenia zostało" <<endl;
        loop++;
    }

    /*
    Do/While loop
    To po prostu wariant pętli loop
    Syntax:
    do {
        // code block to be executed
    }
    while (condition);
    */
    
    int loop2 = 1;
    do{
        cout << loop2 << " żelków do zjedzenia poszło" <<endl;
        loop2++;
    }
    while (loop2 < 101);

    /*
    For loop
    Kiedy wiesz ile dokładnie razy chcesz wykonać daną operacje możesz użyć
    pętli for zamiast while
    Syntax:
    for (int i = 0; i < 10; i++) {
        // code block to be executed
    }
    */

    for(int jellysToEat = 1; jellysToEat < 101; jellysToEat++){
        cout << jellysToEat << " żelków do zjedzenia nadal mam" <<endl;
    }; // nie zapominaj o średnikach ;)

    /* 
    Możemy użyć break'a w pętli for
    Syntax:
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
    cout << i << "\n";
    }

    Możemy też użyć słowo kluczowe "continue", aby pominąć daną rzecz
    Syntax:
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
    cout << i << "\n";
    }
    */

    /*
    Array
    Array'e są przystosowane do przechowywania kilku wartości w jednej zmiennej
    */

    string jellys[] = {"Candy", "Haribo"};
    for (int jelly = 0; jelly < 2; jelly++) {
        cout << "Żelki firmy " << jellys[jelly] << " są dobre ;-;" <<endl;
    }

    /*
    Foreach loop
    Syntax:
    for (type variableName : arrayName) {
        // code block to be executed
    }
    */    

    for (string jelly : jellys) {
        cout << "Żelki firmy " << jelly << " są zarąbiste ;-;" <<endl;
    }

    /*
    Aby dostać rozmiar arraya w bajtach możemy użyć operatora sizeof()
    Aby dostać rozmiar arraya nie w bajtach musimy podzielić sizeof(zmiennej) przez sizeof(typu zmiennej)
    */

    cout << "Są tylko " << sizeof(jellys) / sizeof(string) << " dobre firmy z dobrymi żelkami" <<endl;

    /*
    Struktury, czyli obiekty
    syntax:
    struct {               // Structure declaration
        int myNum;         // Member (int variable)
        string myString;   // Member (string variable)
    }myStructure;          // Structure variable
    */

    struct 
    {
        string jellysCorp;
        string tasteOfJellys;
        int numberOfJellysInPackage;
        double priceOfJellys;
    }jellyIsGood;

    jellyIsGood.jellysCorp = "Candy";
    jellyIsGood.tasteOfJellys = "Yummy";
    jellyIsGood.numberOfJellysInPackage = 200/2.5;
    jellyIsGood.priceOfJellys = 2.99;

    cout << "Good jellys are from " << jellyIsGood.jellysCorp << " and their taste must be " << jellyIsGood.tasteOfJellys << ". Their cost is only " << jellyIsGood.priceOfJellys << " and there are " << jellyIsGood.numberOfJellysInPackage << " jellys in one package." <<endl;

    /*
    Za pomocą znaku "&" referujemy zmienną do istniejącej zmiennej
    Syntax:
    string str = "My string";
    string &myString = string;

    Pointer to zmienna, która przechowuje pamięć adresu, jako swoją wartość
    Operator pointer'a to "*"

    Tworzenie funckji w c++
    Funkcja to blok kodu, który działa tylko wtedy, kiedy zostaje wywołany
    Syntax:
    void myFunction() {
        // code to be executed
    }
    Aby funkcja działa musimy napisać funckję poza naszym main, a następnie
    ją wywołać w naszym main
    Czyli:
    void myFunction() {
        // code to be executed
    }
    int main() {
        myFunction();  // call the function
        return 0;
    }

    w funckcjach z parametrem określamy typ naszego parametru 
    void myFunction(string firstName, string secondName) {
        cout << firstName << " " << secondName << endl;
    }

    int main() {
        myFunction("Kacper", "Marciniak");
        return 0;
    }

    możemy przypisać wartość naszemu parametrowi i następnie przy wywołaniu
    funkcji zmienić tą wartość lub  nie zmieniać jej i ją wywołać

    void myFunction(string country = "Poland"){
        cout << country << endl;
    }

    int main(){
        myFunction("Germany");
        myFunction();

        return 0;
    }

    możemy też zwrócić wartość w funckji aby zaktualizować wartość wyniku
    void myFunction(int x){
        return x + 5;
    }
    int main(){
        cout << myFunction(10) << endl;
        return 0;
    }

    */

    itsMe("Kacper", 16);

    string yourName2;
    int yourAge2;
    
    cout << "Wprowadź swoje imię: "<< endl;
    cin >> yourName2;
    cout << "Your age: "<< endl;
    cin >> yourAge2;

    aboutYou(yourName2, yourAge2);

    /*
    Jeżeli chcemy przypisać Array do funckji, wtedy nasza 
    funkcja oraz int main() będą wyglądały w ten sposób:

    void myNumberFunction(int myNumbers[5]){
        for (int i = 0; i < 5; i++){
            cout << myNumbers[i] <<endl;
        }
    }

    int main(){
        int myNumbers[5] = {10, 20, 30, 40, 50};
        myNumberFunction(myNumbers);

        return 0;
    }

    ===========================================================
    ===================== Nadmiar Funckji =====================
    ===========================================================

    Podczas nadmiaru funkcji, kilka funckji może mieć tą samą 
    nazwę z innymi parametrami

    - int myFuntion(int x)
    - float myFunction(float x)
    - double myFunction(double x, double y)

    int plusFunctionInteger(int x, int y){
        return x + y;
    }

    double plusFunctionDouble(double x, double y){
        return x + y;
    }

    int main(){
        int myNum1 = plusFunctionInteger(10, 5);
        double myNum2 = plusFunctionDouble(3.2, 2.21);

        cout << "Integer: " << myNum1 <<endl;
        cout << "Double: " << myNum2 <<endl;

        return 0;
    }

    ============================================================
    ===================== Rekursja Funckji =====================
    ============================================================

    Rekursja funkcji to technika tworzenia funckji, która wywołuje się sama.
    Za pomocą tej metody jesteśmy w stanie poradzić sobie z skomplikowanymi 
    problemami.

    int sum(int x) {
        if(x > 0) {
            return x + sum(x - 1);
        } else{
            return 0;
        }
    }

    int main(){
        int result = sum(10);
        cout << result;
        return 0;
    }

    ===================================================
    ===================== OOP C++ =====================
    ===================================================

    OOP jest skótem od ,,Object-Oriented Programming", czyli programowanie skupiona
    na obiektach. Proceduralne programowanie opiera się na pisaniu procedur lub 
    funkcji, opierających się na danych, podczas gdy programowanie obiektowe (skupione 
    na programowaniu) opierane jest na tworzeniu obiektów, które przechowują dane i 
    funckje.

    Programowanie skupione na obiektach jest lepsze od proceduralnego ze względu na:
    - OOP jest szyszbe i łatwiejsze do urochomienia
    - OOP posiada czystą strukturę dla programów
    - OOP pomaga zachować kod C++ SUCHYM z angielskiego "DRY code", co oznacza "Don't repeat yourself code". 
    - OOP pozwala na tworzenie pełnych używalnych aplkacji, w krótszym czasie, bez potrzeby pisania więcej kodu 

    Co to są obiekty i klasy ?

    Klasą może być owoc, natomiast obiektem mógłboby być jabłko, autem
    mogłoby być Volvo, a Słodycze, żelkami.

    Wszystko w C++ ma związek z klasami, atrybutami, obiektami i metodami. Dla przykładu obiektem jest auto,
    auto posiada atrybut taki, jak waga lub kolor oraz metoday, takie jak jedź i przerwa. Atrybuty i metoda to 
    z zasady zazwyczaj zmienna i funkcje, które należą do klas. 

    ~ Klasa wygląda w ten sposób:

    class MyClass {       // określenie funkcji
        public:           // określacz dostępu
        int myNum;        // Atrybut (int variable)
        string myString;  // Atrybut (string variable)
    };

    int main() {
        MyClass myObject;  // Obiekt klasy "MyClass"

        // Określanie wartości dla atrybutów
        myObj.myNum = 15; 
        myObj.myString = "Some text";

        // Pokaż wartości atrbutów
        cout << myObj.myNum << "\n";
        cout << myObj.myString;
        
        return 0;
    }

    Możesz tworzyć 

    */


    // kończy naszą funkcję
    return 0;
}