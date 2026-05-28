#include <iostream>
using namespace std;
struct Studente {
char nome[30];
char cognome[30];
float voto;
};

    void calcolomedia(Studente classe [] ,int stud ){
    
    float somma=0;
    float media;    
        for (int i = 0; i<stud;i++){
            somma = somma+classe[i].voto;
    }

    media=somma/stud;
    cout<<" la media degli studenti e'"<< media<<endl;
};

int main(){
    int stud;
    Studente classe [10];
        do{
            cout<<"quanti studenti vuoi inserire (max.10): ";
            cin>>stud;
        } while(stud<1||stud>10);
        for (int i = 0; i<stud;i++){
            cout<<"inserisci nome studente: ";
                cin>>classe [i].nome;
            
            cout<<"inserisci cognome studente: ";
                cin>>classe [i].cognome;
            
                cout<<"inserisci voto:";
                cin>>classe[i].voto;
        }

            cout<<"elenco completo studente :";
        for (int i = 0; i<stud;i++){

            cout<< classe [i].nome<<" "<<classe[i].cognome<<" e il suo voto e' "<<classe[i].voto;
            cout<<" "<<endl;
         }

         calcolomedia (classe, stud);
    
         int sufficienti=0;

         for (int i = 0; i<stud;i++){
            if(classe [i].voto>=6.0){
                sufficienti++;
            }
         }
            cout<<"numero studenti con voto sufficiente e' "<<sufficienti;


    return 0;
}