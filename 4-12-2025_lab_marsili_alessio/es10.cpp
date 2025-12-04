#include <iostream>
using namespace std;
int main () {
int eta;
cout<<"inserisci la tua eta "<<endl;
cin>>eta;
if (eta==14 || eta==15){
	cout<<"puoi guidare solo scooter di cilindrata 50cc ";
}
	else if(eta ==16 || eta==17){
		cout<<"puoi guidare la moto fino aai 125cc";
	}
	else if(eta==18 || eta==19 || eta==20){
		cout<<" puoi guidare fino ai 95 cavalli";
	}
	else if (eta>=21 ){
		cout<<"puoi guidare senza vincoli";
	}
	
	
	return 0;
}
