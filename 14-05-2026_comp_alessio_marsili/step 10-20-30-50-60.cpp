#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

// =======================
// CLASSE CONTATTO
// =======================

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

// ====================================
// STEP 60
// CLASSE ASTRATTA
// ====================================

class GestoreContattiABC {

public:

    // Metodi virtuali puri

    virtual void aggiungiContatto(
        const char* nome,
        const char* cognome,
        const char* telefono
    ) = 0;

    virtual void ordinaContatti() = 0;

    virtual void cercaContatto(
        const char* cercato
    ) = 0;

    virtual void stampaContatti() = 0;

    // Distruttore virtuale
    virtual ~GestoreContattiABC() {
    }
};

// ====================================
// CLASSE DERIVATA CONCRETA
// ====================================

class GestoreRAMOrdinata : public GestoreContattiABC {

private:

    vector<Contatto> rubrica;

public:

    // Inserimento
    void aggiungiContatto(
        const char* nome,
        const char* cognome,
        const char* telefono
    ) {

        rubrica.push_back(
            Contatto(nome, cognome, telefono)
        );
    }

    // Ordinamento
    void ordinaContatti() {

        for (int i = 0; i < rubrica.size() - 1; i++) {

            for (int j = i + 1; j < rubrica.size(); j++) {

                if (strcmp(
                        rubrica[i].getCognome(),
                        rubrica[j].getCognome()
                    ) > 0) {

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

            int medio =
                inizio + (fine - inizio) / 2;

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

            cout << endl;
            cout << "Trovato!" << endl;

            cout << "Nome: "
                 << rubrica[posizione].getNome()
                 << endl;

            cout << "Telefono: "
                 << rubrica[posizione].getTel()
                 << endl;
        }
        else {

            cout << endl;
            cout << "Contatto non trovato."
                 << endl;
        }
    }

    // Stampa
    void stampaContatti() {

        cout << endl;
        cout << "===== RUBRICA ====="
             << endl;

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

// ====================================
// MAIN
// ====================================

int main() {

    // Puntatore alla classe astratta
    GestoreContattiABC* gestore;

    // Oggetto concreto
    gestore = new GestoreRAMOrdinata();

    // Inserimento
    gestore->aggiungiContatto(
        "Mario", "Rossi", "333-01"
    );

    gestore->aggiungiContatto(
        "Luigi", "Bianchi", "333-02"
    );

    gestore->aggiungiContatto(
        "Anna", "Verdi", "333-03"
    );

    gestore->aggiungiContatto(
        "Paolo", "Neri", "333-04"
    );

    gestore->aggiungiContatto(
        "Elena", "Gialli", "333-05"
    );

    gestore->aggiungiContatto(
        "Sofia", "Ferrari", "333-06"
    );

    // Ordinamento
    gestore->ordinaContatti();

    // Stampa
    gestore->stampaContatti();

    // Ricerca
    char cercato[50];

    cout << endl;
    cout << "Chi vuoi cercare? ";

    cin >> cercato;

    gestore->cercaContatto(cercato);

    // Libero memoria
    delete gestore;

    return 0;
}
