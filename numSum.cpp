#include <iostream>
using namespace std;

int main() {
	int num, somma =0;
	for(int x = 1; x<11; x=x+1){
		cout << "Inserire il "<< x << "° numero: ";
		cin >> num;
		if(num==0){
			x=10;
		}
		else{
			somma = somma+num;
		}
	}
	cout << "La somma dei numeri inseriti e': " << somma << "\n";
	return 0;
}
