#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

// CLASSE CONTATTO

class Contatto {
private:
    char nome[50];
    char cognome[50];
    char tel[20];

public:
    Contatto(const char* n, const char* c, const char* t) {
        strcpy(nome, n);
        strcpy(cognome, c);
        strcpy(tel, t);
    }

    const char* getNome() const {
        return nome;
    }

    const char* getCognome() const {
        return cognome;
    }

    const char* getTel() const {
        return tel;
    }
};


// STEP 50
class GestoreContatti {
private:
    vector<Contatto> rubrica;

public:

    // Inserimento contatto
    void aggiungiContatto(const char* nome,
                          const char* cognome,
                          const char* telefono) {

        rubrica.push_back(
            Contatto(nome, cognome, telefono)
        );
    }

    // Ordinamento per cognome
    void ordinaContatti() {

        for (int i = 0; i < rubrica.size() - 1; i++) {

            for (int j = i + 1; j < rubrica.size(); j++) {

                if (strcmp(rubrica[i].getCognome(),
                           rubrica[j].getCognome()) > 0) {

                    swap(rubrica[i], rubrica[j]);
                }
            }
        }
    }

    // Ricerca binaria
    void cercaContatto(const char* cercato) {

        int inizio = 0;
        int fine = rubrica.size() - 1;

        int posizione = -1;

        while (inizio <= fine) {

            int medio = inizio + (fine - inizio) / 2;

            int comp = strcmp(
                rubrica[medio].getCognome(),
                cercato
            );

            if (comp == 0) {

                posizione = medio;
                break;
            }

            if (comp < 0) {
                inizio = medio + 1;
            }
            else {
                fine = medio - 1;
            }
        }

        // Risultato
        if (posizione != -1) {

            cout << "Trovato!" << endl;

            cout << "Nome: "
                 << rubrica[posizione].getNome()
                 << endl;

            cout << "Telefono: "
                 << rubrica[posizione].getTel()
                 << endl;
        }
        else {

            cout << "Contatto non trovato." << endl;
        }
    }

    // Stampa tutti i contatti
    void stampaContatti() {

        cout << endl;
        cout << "===== RUBRICA =====" << endl;

        for (int i = 0; i < rubrica.size(); i++) {

            cout << rubrica[i].getCognome()
                 << " "
                 << rubrica[i].getNome()
                 << " - "
                 << rubrica[i].getTel()
                 << endl;
        }
    }
};


int main() {

    // Creo il gestore
    GestoreContatti gestore;

    // Inserimento contatti
    gestore.aggiungiContatto("Mario", "Rossi", "333-01");
    gestore.aggiungiContatto("Luigi", "Bianchi", "333-02");
    gestore.aggiungiContatto("Anna", "Verdi", "333-03");
    gestore.aggiungiContatto("Paolo", "Neri", "333-04");
    gestore.aggiungiContatto("Elena", "Gialli", "333-05");
    gestore.aggiungiContatto("Sofia", "Ferrari", "333-06");
    gestore.aggiungiContatto("Marco", "Russo", "333-07");
    gestore.aggiungiContatto("Giulia", "Esposito", "333-08");
    gestore.aggiungiContatto("Roberto", "Romano", "333-09");
    gestore.aggiungiContatto("Sonia", "Gallo", "333-10");

    // Ordinamento
    gestore.ordinaContatti();

    // Stampa
    gestore.stampaContatti();

    // Ricerca
    char cercato[50];

    cout << endl;
    cout << "Chi vuoi cercare? ";

    cin >> cercato;

    gestore.cercaContatto(cercato);

    return 0;
}
