#include <iostream>
using namespace std;
int main(){
	int N,N1;
	int cont=1;
	cout<<" inserisci un numero N positivo "<<endl;
	cin>>N;
	if(N<=0){
	cout<<" il numero deve essere maggiore di 0 "<<endl;	
	}
	  for (int i = 0; i < N; i++) {
	  cout<<cont<<" " ;
	  cont = cont*2;
	  
	  
	  
	  }

	
	
	
	
	
	return 0;
}
