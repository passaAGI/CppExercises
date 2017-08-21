#include <iostream>
#include <cmath>
using namespace std;

int main(){
float a,b,c,x1,x2,delta;
cout<<"Inserire il coefficiente del termine di secondo grado: ";
cin>>a;
cout<<"Inserire il coefficiente del termine di primo grado: ";
cin>>b;
cout<<"Inserire il termine noto: ";
cin>>c;
delta=(b*b)-(4*a*c);
if (delta>0){             	 //se delta>0 (radici reali e distinte)calcola le due radici
	x1=(-b+sqrt(delta))/(2*a);  //calcola le due radici
	x2=(-b-sqrt(delta))/(2*a);
	cout<<"L'equazione ha due radici reali e distinte\n";
	cout<<"La prima radice e' "<<x1<<"\n";
	cout<<"La seconda radice e' "<<x2<<"\n";
}
if (delta==0){   				//se delta=0 (radici reali e coincidenti)
	x1=-b/(2*a);            //calcola la radice
	cout<<"L'equazione ha due radici reali coincidenti uguali a "<<x1;
}
if (delta<0){              //se delta<0 l'equazione non ha radici reali
	cout<<"L'equazione non ha radici reali";
}
return(0);
}
