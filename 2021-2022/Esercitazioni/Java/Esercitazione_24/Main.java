import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String nome;
        int min_giocatori, max_giocatori, min_eta, max_durata, cont, giocatori, scelta;
        Scanner input = new Scanner(System.in);
        cont = 0;
        Gioco gioco1, gioco2, gioco3;

        do {
            cont++;
            System.out.println("Configurazione del gioco " + cont);
            System.out.println("Inserire il nome del gioco ");
            nome = input.next();
            do {
                System.out.println("Inserire il numero minimo di giocatori");
                min_giocatori = input.nextInt();
                System.out.println("Inserire il numero massimo di giocatori");
                max_giocatori = input.nextInt();
            } while (min_giocatori > max_giocatori || min_giocatori < 2 || min_giocatori >= 10 || max_giocatori <= 2
                    || max_giocatori > 10);
            do {
                System.out.println("Inserire l'età minima (maggiore di 6)");
                min_eta = input.nextInt();
            } while (min_eta <= 6);
            do {
                System.out.println("Inserire la durata massima del gioco");
                max_durata = input.nextInt();
            } while (max_durata > 60);

            if (cont == 1)
                gioco1 = new Gioco(nome, min_giocatori, max_giocatori, min_eta, max_durata);
            if (cont == 2)
                gioco2 = new Gioco(nome, min_giocatori, max_giocatori, min_eta, max_durata);
            if (cont == 3)
                gioco3 = new Gioco(nome, min_giocatori, max_giocatori, min_eta, max_durata);
        } while (cont != 3);

        System.out.println("La configurazione dei giochi è finita, ora si gioca!!!");

        do {
            System.out.println("Quante persone vogliono giocare");
            giocatori = input.nextInt();
        } while (giocatori < 2 || giocatori > 10);

        System.out.println("Ecco i giochi:");
        System.out.print("1) ");
        gioco1.getGioco();
        System.out.println("-------------------------------------------------------");
        System.out.print("2) ");
        gioco2.getGioco();
        System.out.println("-------------------------------------------------------");
        System.out.print("3) ");
        gioco3.getGioco();
        System.out.println("-------------------------------------------------------");

        System.out.println("Scegliere il gioco");
        scelta = input.nextInt();
        if (scelta == 1) {
            System.out.print(gioco1.Durata());
        }
        if (scelta == 2) {
            System.out.print(gioco2.Durata());
        }
        if (scelta == 3) {
            System.out.print(gioco3.Durata());
        }

    }
}