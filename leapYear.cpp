#include <iostream>

using namespace std;

int main()
{
    int anno;
    cout << "Inserisci un anno: " << endl;
    cin >> anno;
    if((anno%4==0)&&(anno%100!=0)||(anno%400==0))
        cout << "L'anno inserito e' bisestile" << endl;
    else
        cout << "L'anno inserito non e' bisestile" << endl;
    return 0;
}
