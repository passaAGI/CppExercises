#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Inserisci il primo numero: " << endl;
    cin >> x;
    cout << "Inserisci il secondo numero: " << endl;
    cin >> y;

if(x%y==0) cout << "Il primo numero e' multiplo del secondo" << endl;
        else cout << "Il primo numero non e' multiplo del secondo" << endl;

        return 0;
}
