

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char imie[11];
    string nazwisko;
    int ocena;
    int lata;

    
    cout << "Jak masz na imie?";
    cin.get(imie,11);                 // funkcja getline(x,y) wczytuje 11 znakow do tablicy imie, razem ze znakiem spacji oraz konczacym \0. Enter - koniec wczytywania 
    cout << "Jak sie nazywasz?";
    cin >> nazwisko;                  //jako wczytanie 1 słowa bez SPACJI uzyłem typu string
    cout << "Na jaka ocene zaslugujesz od 2 do 6?";
    cin >> ocena;
    cout << "Ile masz lat?";
    cin >> lata;

    cout << "Nazwisko: " << nazwisko<<", " << imie << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    cout << "Wiek: " << lata;

}

