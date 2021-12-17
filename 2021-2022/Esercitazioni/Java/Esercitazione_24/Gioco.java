import java.util.Random;

public class Gioco {
    private String nome;
    private int min_giocatori;
    private int max_giocatori;
    private int min_eta;
    private int max_durata;
    private Random gen;

    public Gioco(String nome, int min_giocatori, int max_giocatori, int min_eta, int max_durata) {
        this.nome = nome;
        this.min_eta = min_eta;
        this.min_giocatori = min_giocatori;
        this.max_giocatori = max_giocatori;
        this.max_durata = max_durata;
        gen = new Random();
    }

    public int Durata() {
        int result = gen.nextInt(max_durata) + 1;
        return result;
    }

    public void getGioco() {
        System.out.println("Nome: " + nome);
        System.out.println("Numero minimo di giocatori: " + min_giocatori);
        System.out.println("Numero massimo di giocatori: " + max_giocatori);
        System.out.println("Età minima: " + min_eta);
        System.out.println("Durata massima: " + max_durata);
    }
}