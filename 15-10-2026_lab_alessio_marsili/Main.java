 class Squadra {
    private String nome;
    private int goalFatti;

    // Costruttore standard
    public Squadra(String nome, int goalFatti) {
        this.nome = nome;
        this.goalFatti = goalFatti;
    }

    // Getter e Setter
    public String getNome() { return nome; }
    public void setNome(String nome) { this.nome = nome; }
    public int getGoalFatti() { return goalFatti; }
    public void setGoalFatti(int goalFatti) { this.goalFatti = goalFatti; }
}
public class Main {
    public static void main(String[] args) {
        // 1. Creiamo la squadra originale
        Squadra s1 = new Squadra("Leoni", 12);

        // PROBLEMA 1 RISOLTO: Creiamo un nuovo oggetto indipendente
        Squadra s2 = new Squadra(s1.getNome(), s1.getGoalFatti()); // <-- RIGA MODIFICATA
        
        s2.setGoalFatti(20); // Modifichiamo solo s2
        
        System.out.println("Goal squadra originale (s1): " + s1.getGoalFatti());
        System.out.println("Goal copia squadra (s2): " + s2.getGoalFatti());

        // PROBLEMA 2
        Squadra s3 = new Squadra("Leoni", 12);
        System.out.println("s1 e' uguale a s3? " + s1.equals(s3));
    }
}