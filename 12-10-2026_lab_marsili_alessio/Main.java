// Classe Persona

class Persona {

    public void lavoro() {
        System.out.println(" la persona sta lavorando");
    }
}

// Classe Studente
class Studente extends Persona {

    @Override
    public void lavoro() {
        System.out.println("sto studiando");
    }
}

// Classe principale contenente il metodo main per testare le due classi
public class Main {

    public static void main(String[] args) {// Punto di ingresso del programma: da qui parte l'esecuzione del codice
        Persona persona = new Persona();
        Studente studente = new Studente();

        persona.lavoro();  // Stampa: la persona sta lavorando
        studente.lavoro(); // Stampa: sto studiando

        persona = studente;
        persona.lavoro();

    }
}
