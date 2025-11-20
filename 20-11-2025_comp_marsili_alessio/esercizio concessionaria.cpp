#include <iostream>
using namespace std;
int main(){
const float prezzo = 1.20;
	float km,kminiziali,kmfinali,costo;
	char nome[10];
	char cognome[10];
	cout<<"nome del cliente "<<endl;
	cin>>nome;
	cout<<"cognome delle cliente "<<endl;
	cin>>cognome;
	cout<<"km iniziali della macchina "<<endl;
	cin>>kminiziali;
	cout<<"km finali della macchina "<<endl;
	cin>>kmfinali;
	costo= (kmfinali - kminiziali) *prezzo;
	cout<<"il prezzo del noleggio e' "<<costo<<endl;
	return 0;
}
