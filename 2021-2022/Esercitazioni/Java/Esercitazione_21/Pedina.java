public class Pedina {
    private int lancio1;
    private int lancio2;
    private int posizione1;
    private int posizione2;

    public void avanza(int lancio1, int lancio2) {
        this.lancio1 = lancio1;
        this.lancio2 = lancio2;
        if (this.lancio1 != this.lancio2) {
            posizione1 = posizione1 + lancio1;
            posizione2 = posizione2 + lancio2;
        } else
            System.out.println("Il lancio dei giocatori e' nullo");
    }

    public int getPosizione1() {
        return posizione1;
    }

    public int getPosizione2() {
        return posizione2;
    }
}
