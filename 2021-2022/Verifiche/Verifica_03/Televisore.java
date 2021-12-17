import java.util.Random;

public class Televisore {
    private int canale;
    private int volume;
    private boolean stato;
    private Random gen;
    private int var;

    public Televisore() {
        canale = 1;
        volume = 30;
        stato = false;
        gen = new Random();
    }

    public void getStato() {
        System.out.println("----------------------------------------------");
        System.out.println("Stato TV");
        System.out.println("Canale: " + canale);
        System.out.println("Volume: " + volume);
        if (stato == false)
            System.out.println("Stato: spento");
        else
            System.out.println("Stato: acceso");
    }

    public void setCanale(int canale) {
        this.canale = canale;
    }

    public void incrementoCanale() {
        canale++;
        if (canale == 101)
            canale = 1;
    }

    public void decrementoCanale() {
        canale--;
        if (canale == 0)
            canale = 100;
    }

    public void incrementoVolume() {
        volume++;
        if (volume == 61)
            volume--;
    }

    public void decrementoVolume() {
        volume--;
        if (volume == -1)
            volume++;
    }

    public void setStato(boolean stato) {
        this.stato = stato;
    }

    public void canaleRandom() {
        var = this.canale;
        do {
            this.canale = gen.nextInt(100) + 1;
        } while (this.canale == var);
    }
}
