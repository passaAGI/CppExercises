#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit, kelvin, abszero;
    abszero = -273.15;
    cout << "Inserisci la temperatura in gradi Celsius:" << endl;
    cin >> celsius;
    if(celsius>=abszero){
        fahrenheit = ((9.0/5.0)*celsius)+32;
        cout << "La temperatura in gradi Fahrenheit e' " << fahrenheit << endl;
        kelvin = celsius+273.15;
        cout << "La temperatura in gradi Kelvin e' " << kelvin << endl;
    }
         else
             cout << "Errore: la temperatura inserita e' minore dello zero assoluto" << endl;

    return 0;
}
