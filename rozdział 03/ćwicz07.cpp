
#include <iostream>
#include <iomanip>

using namespace std;

float konwersja(float);                            //funkcja zamieniajaca l/km na mil/galon

int main()
{
    float litry = 0;

    cout << "Podaj spalanie w l/100km:" << endl << "Podaj litry : ";
    cin >> litry;

    cout << fixed;
    cout <<setprecision(2)<< "Spalanie w amerykanskiej jednostce mil/galon wynosi: " << konwersja(litry) << endl;  //setprecision(2) wynik zaokraglony do 2 cyfr po przecinku

}

float konwersja(float litry) {

    float mil_galon = 62.14 / (litry / 3.874);                   // 100km = 62.14 mil
                                                                 // 1 galon = 3.875 litra 
    return mil_galon;

}