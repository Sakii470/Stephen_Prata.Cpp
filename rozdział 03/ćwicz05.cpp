#include <iostream>

using namespace std;

long double procent_pol_swiat(long long, long long);

int main()
{
	long long populacja_swiata = 0;
	long long populacja_polski = 0;

	cout << "Podaj liczbe ludnosci swiata: ";
	cin >> populacja_swiata;

	cout << "Podaj liczbe ludnosci polski: ";
	cin >> populacja_polski;

	cout << "Populacja Polski stanowi: " << procent_pol_swiat(populacja_swiata,populacja_polski) << "% populacji swiata." << endl;

	
	
}

 long double procent_pol_swiat(long long populacja_swiata, long long populacja_polski) {

	 return float(populacja_polski) / float(populacja_swiata) * 100;                          //rzutowanie 'long long' na 'float' - konwersja
}
