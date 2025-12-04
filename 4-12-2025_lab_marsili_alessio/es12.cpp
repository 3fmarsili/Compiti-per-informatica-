#include <iostream>
using namespace std;
int main (){
	int eta1,eta2,eta3,etamagg, etamin, differenza;
	differenza=0;
	cout<<"inserisci le tre eta ";
	cin>>eta1,eta2,eta3;
	if (eta1> eta2 &&  eta1>eta3){
		eta1=etamagg;
	}
	else if ( eta2>eta1 && eta2>eta3){
		eta2=etamagg;
	}
	else if (eta3>eta1 && eta3>eta2){
		eta3=etamagg;
	}
	if(eta1<eta2 && eta1<eta3){
		eta1=etamin;
	}
	else if (eta2<eta1 && eta2<eta3 ){
		eta2=etamin;
	}
	else if (eta3<eta1 && eta3<eta2){
		eta3=etamin ;
	}
	differenza= etamagg-etamin;
	cout<<"la differenza tra il fratello maggiore e quello minore : "<<differenza;

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
