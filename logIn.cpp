#include <iostream>
using namespace std;

int main() {
	string username, password;
	cout << "Benvenuto. Questa e' un'area ad accesso limitato. Per accedervi occorrono nome utente e password" << endl;
	do{
	cout << "Nome utente: " << endl;
	cin >> username;
	if(username=="Caius"){
		cout << "Nome riconosciuto" << endl;
	}
}
    while(username!="Caius");

	do{
	cout << "Password: " << endl;
	cin >> password;
	if(password=="ayylmao"){
		cout << "Password riconosciuta" << endl;
	}
}
    while(password!="ayylmao");
	cout << "Accesso effettuato";
	return 0;
}
