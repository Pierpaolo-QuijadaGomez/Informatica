import java.util.Random;

public class Dado {
    private int numeroFacce;
    private Random gen;

    public Dado(int numeroFacce) {
        this.numeroFacce = numeroFacce;
        gen = new Random();
    }

    public int lancia() {
        int result = gen.nextInt(this.numeroFacce) + 1;
        return result;
    }

}
