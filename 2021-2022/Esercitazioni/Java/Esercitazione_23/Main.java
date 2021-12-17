import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        String nome, cognome;
        int assenze;
        double voto;
        Scanner input = new Scanner(System.in);
        System.out.println("Nome");
        nome = input.next();
        System.out.println("Cognome");
        cognome = input.next();
        System.out.println("Assenze (gg)");
        assenze = input.nextInt();
        Studente s = new Studente(nome, cognome, assenze);
        System.out.println("Voto Informatica");
        voto = input.nextDouble();
        s.setInformatica(voto);
        System.out.println("Voto Inglese");
        voto = input.nextDouble();
        s.setInglese(voto);
        System.out.println("Voto Fisica");
        voto = input.nextDouble();
        s.setFisica(voto);
        System.out.println("Voto Matematica");
        voto = input.nextDouble();
        s.setMatematica(voto);
        System.out.println("Voto Italiano");
        voto = input.nextDouble();
        s.setItaliano(voto);
    }
}