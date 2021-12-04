import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int ore, minuti, secondi, scelta;
        int ore_2, minuti_2, secondi_2;
        Scanner input = new Scanner(System.in);
        System.out.println("Inserire le ore:");
        ore = input.nextInt();
        System.out.println("Inserire i minuti:");
        minuti = input.nextInt();
        System.out.println("Inserire i secondi:");
        secondi = input.nextInt();
        Time tempo = new Time(ore, minuti, secondi);
        Time tempo_2;
        Time tempo_3;

        do {
            System.out.println(
                    " 1) Aggiungi orario\n 2) Sottrarre due orari\n 3) Stampa orario\n 4) Validazione\n 0) Esci");
            scelta = input.nextInt();
            switch (scelta) {
                case 1:
                    System.out.println("Inserire le ore:");
                    ore_2 = input.nextInt();
                    System.out.println("Inserire i minuti");
                    minuti_2 = input.nextInt();
                    System.out.println("Inserire i secondi");
                    secondi_2 = input.nextInt();
                    tempo_2 = new Time(ore_2, minuti_2, secondi_2);
                    tempo.addTime(tempo_2);
                    break;

                case 2:
                    System.out.println("Inserire le ore:");
                    ore_2 = input.nextInt();
                    System.out.println("Inserire i minuti");
                    minuti_2 = input.nextInt();
                    System.out.println("Inserire i secondi");
                    secondi_2 = input.nextInt();
                    tempo_3 = new Time(ore_2, minuti_2, secondi_2);
                    tempo.subTime(tempo_3);
                    break;

                case 3:
                    System.out.println(tempo);
                    break;

                case 4:
                    if (ore > 24 || minuti > 59 || secondi > 59) {
                        System.out.println("Orario non valido, inserire nuovamente i dati.");
                        System.out.println("Inserire le ore:");
                        ore = input.nextInt();
                        System.out.println("Inserire i minuti");
                        minuti = input.nextInt();
                        System.out.println("Inserire i secondi");
                        secondi = input.nextInt();
                    } else
                        System.out.println("Orario valido");

                    break;
            }
        } while (scelta != 0);
    }
}