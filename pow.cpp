#include <iostream>
using namespace std;

int main() {
	int num, exp, ris=0;
	cout << "Inserire un numero intero: ";
	cin >> num;
	cout << "Inserire un esponente: ";
	cin >> exp;
	if(exp==0){
		ris=1;
	}
	else{
		ris=num;
		for(int x=1; x<exp; x=x+1)
		ris=ris*num;
	}
	cout << "Il risultato dell'operazione e': " << ris << "\n";
	return 0;
}
