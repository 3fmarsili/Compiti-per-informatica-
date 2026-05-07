#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;


struct Contatto {
    string nome, cognome, tel;
};

int main() {
    vector<Contatto> rubrica;

    // 1. Inserimento (Step 10)
    rubrica.push_back({"Mario", "Rossi", "333-01"});
    rubrica.push_back({"Luigi", "Bianchi", "333-02"});
    rubrica.push_back({"Anna", "Verdi", "333-03"});
    rubrica.push_back({"Paolo", "Neri", "333-04"});
    rubrica.push_back({"Elena", "Gialli", "333-05"});
    rubrica.push_back({"Sofia", "Ferrari", "333-06"});
    rubrica.push_back({"Marco", "Russo", "333-07"});
    rubrica.push_back({"Giulia", "Esposito", "333-08"});
    rubrica.push_back({"Roberto", "Romano", "333-09"});
    rubrica.push_back({"Sonia", "Gallo", "333-10"});

    // STEP 20: Ordinamento necessario per la ricerca binario
    // Ordiniamo la rubrica per cognome
    for (int i = 0; i < rubrica.size() - 1; i++) {
        for (int j = i + 1; j < rubrica.size(); j++) {
            if (rubrica[i].cognome > rubrica[j].cognome) {
                swap(rubrica[i], rubrica[j]);
            }
        }
    }

    cout << "Rubrica pronta e ORDINATA in RAM con 10 contatti." << endl;

    
    // STEP 20: Ricerca Binaria
    
    string cercato;
    cout << "Chi vuoi cercare? (inserisci cognome): ";
    cin >> cercato;

    int inizio = 0;
    int fine = rubrica.size() - 1;
    int posizione = -1;

    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;

        if (rubrica[medio].cognome == cercato) {
            posizione = medio;
            break; 
        }
        if (rubrica[medio].cognome < cercato) {
            inizio = medio + 1; // Cerca a destra
        } else {
            fine = medio - 1;   // Cerca a sinistra
        }
    }

    // Risultato della ricerca
    if (posizione != -1) {
        cout << "Trovato! Nome: " << rubrica[posizione].nome 
             << " Tel: " << rubrica[posizione].tel << " (Posizione: " << posizione << ")" << endl;
    } else {
        cout << "Non c'e' nessuno con questo cognome." << endl;
    }

    return 0;
}
