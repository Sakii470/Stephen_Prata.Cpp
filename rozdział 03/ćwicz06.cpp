#include <iostream>
#include <iomanip>

using namespace std;

float konwersja(float);                            //funkcja zamieniajaca l/km na mil/galon

int main()
{

    cout << "Podaj spalanie w l/100km:" << endl << "Podaj litry: ";
    cin >> litry;
   
    cout << "Spalanie w amerykanskiej jednostce mil/galon wynosi: " << konwersja(litry) << endl;



   

    cout << fixed;

    cout << setprecision(2)<<"Twoje spalanie to " << spalanie(km, benzyna) << " l/100km" << endl;
}

float konwersja(float litry) {

    float mil_galon = 62.14 / (litry / 3.874);

    return mil_galon;
    
}
