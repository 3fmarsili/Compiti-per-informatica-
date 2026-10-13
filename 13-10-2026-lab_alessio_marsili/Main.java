// Classe base Persona
class Persona {
   // protected: accessibile direttamente anche dalle classi figlie (es. Studente)
    protected String nome;
    protected int eta;

    public Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    public String descrivi() {
        return "Nome: " + nome + ", eta': " + eta;
    }
}

// Sottoclasse Studente
class Studente extends Persona {
    private String classe;
    private double media;

    public Studente(String nome, int eta, String classe, double media) {
        super(nome, eta);//invoca il costruttore della classe padre Persona per inizializzare nome ed età
       
        this.classe = classe;//inizializzano gli attributi specifici della sottoclasse Studente
        
        this.media = media;//inizializzano gli attributi specifici della sottoclasse Studente
    }

    @Override
    public String descrivi() {
        return super.descrivi() + ", classe: " + classe + ", media: " + media;
    }

    public boolean promosso() {
        return media >= 6;
    }
}

// Classe Principale
public class Main {
    public static void main(String[] args) {
        Persona p1 = new Persona("Mario", 45);
        Studente s1 = new Studente("Anna", 16, "3B", 7.5);
        Studente s2 = new Studente("Luca", 17, "4A", 5.2);

        Persona[] persone = { p1, s1, s2 };

        for (Persona p : persone) {
            System.out.println(p.descrivi());
            
            if (p instanceof Studente) {
                Studente s = (Studente) p;
                System.out.println("Promosso: " + s.promosso());
            }
        }
    }
}