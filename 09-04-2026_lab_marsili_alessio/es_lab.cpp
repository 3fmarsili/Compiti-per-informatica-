#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struttura minima
struct Contatto {
    string nome, cognome, tel;
};

int main() {
    vector<Contatto> rubrica;

    // 1. Inserimento manuale veloce di 10 contatti (niente funzioni complicate)
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

    cout << "Rubrica pronta in RAM con 10 contatti." << endl;

    // 2. Ricerca sequenziale semplicissima
    string cercato;
    cout << "Chi vuoi cercare? (inserisci cognome): ";
    cin >> cercato;

    bool trovato = false;
    for (int i = 0; i < rubrica.size(); i++) {
        if (rubrica[i].cognome == cercato) {
            cout << "Trovato! Tel: " << rubrica[i].tel << endl;
            trovato = true;
        }
    }

    if (!trovato) {
        cout << "Non c'e' nessuno con questo cognome." << endl;
    }

    return 0;
}
