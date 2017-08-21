#include <iostream>
using namespace std;

int main() {
	int num=0, pari =0;
	for(int x=1; x<=10; x++){
		cout << "Inserisci il " << x << "° numero: ";
		cin >> num;
		if(num%2==0){
			pari = pari+1;
		}
	}
	cout << "Hai inserito " << pari << " numeri pari";
	return 0;
}
