
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string dessert;

    cout << "Podaj swoje imię: \n";
    getline(cin, name);              //przy pomocy funkcji getline(strumien, nazwa zmiennej) wczytałem cały łancuch znakowy skladajacy sie z wielu wyrazow az do napotkania znaku '\\n'- klawisz enter
    cout << "Podaj swoj ulubiony deser: \n";
    getline(cin, dessert);

    cout << "Mam dla Ciebie " << dessert << ", " << name << endl;
    
}

