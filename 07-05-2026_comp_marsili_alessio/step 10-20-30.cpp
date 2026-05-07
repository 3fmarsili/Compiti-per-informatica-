#include <iostream>
#include <vector>
#include <cstring> // Necessario per gestire char[] (strcmp, strcpy)
#include <algorithm> 

using namespace std;

// STEP 30: Passaggio da Struct a Classe
class Contatto {
private:
    char nome[50];
    char cognome[50];
    char tel[20];

public:
    Contatto(const char* n, const char* c, const char* t) {
        strcpy(this->nome, n);
        strcpy(this->cognome, c);
        strcpy(this->tel, t);
    }

    const char* getNome() const { return nome; }
    const char* getCognome() const { return cognome; }
    const char* getTel() const { return tel; }
};

int main() {
    // Il vector ora contiene oggetti della classe Contatto
    vector<Contatto> rubrica;

    // 1. Inserimento (Invariato nella logica, ora usa il costruttore)
    rubrica.push_back(Contatto("Mario", "Rossi", "333-01"));
    rubrica.push_back(Contatto("Luigi", "Bianchi", "333-02"));
    rubrica.push_back(Contatto("Anna", "Verdi", "333-03"));
    rubrica.push_back(Contatto("Paolo", "Neri", "333-04"));
    rubrica.push_back(Contatto("Elena", "Gialli", "333-05"));
    rubrica.push_back(Contatto("Sofia", "Ferrari", "333-06"));
    rubrica.push_back(Contatto("Marco", "Russo", "333-07"));
    rubrica.push_back(Contatto("Giulia", "Esposito", "333-08"));
    rubrica.push_back(Contatto("Roberto", "Romano", "333-09"));
    rubrica.push_back(Contatto("Sonia", "Gallo", "333-10"));

    // STEP 20: Ordinamento (Logica mantenuta, adattata a char[] tramite strcmp)
    for (int i = 0; i < rubrica.size() - 1; i++) {
        for (int j = i + 1; j < rubrica.size(); j++) {
            // strcmp restituisce > 0 se la prima stringa è alfabeticamente successiva alla seconda
            if (strcmp(rubrica[i].getCognome(), rubrica[j].getCognome()) > 0) {
                swap(rubrica[i], rubrica[j]);
            }
        }
    }

    cout << "Rubrica (CLASSE) pronta e ORDINATA in RAM." << endl;

    // STEP 20: Ricerca Binaria
    char cercato[50];
    cout << "Chi vuoi cercare? (inserisci cognome): ";
    cin >> cercato;

    int inizio = 0;
    int fine = rubrica.size() - 1;
    int posizione = -1;

    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;
        
        // Confronto tra char[] tramite strcmp
        int comp = strcmp(rubrica[medio].getCognome(), cercato);

        if (comp == 0) {
            posizione = medio;
            break; 
        }
        if (comp < 0) {
            inizio = medio + 1; 
        } else {
            fine = medio - 1;   
        }
    }

    // Risultato della ricerca
    if (posizione != -1) {
        cout << "Trovato! Nome: " << rubrica[posizione].getNome() 
             << " Tel: " << rubrica[posizione].getTel() 
             << " (Posizione: " << posizione << ")" << endl;
    } else {
        cout << "Non c'e' nessuno con questo cognome." << endl;
    }

    return 0;
}
