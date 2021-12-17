public class Vettore {

    private int[] v = new int[100];
    private int n;

    public Vettore() {
        n = 0;
    }

    public void Inserisci(int dato) {
        v[n] = dato;
        n++;
    }

    public int maxPos() {
        int i, p, max;
        max = v[0];
        p = 0;

        for (i = 1; i < n; i++)
            if (v[i] > max) {
                max = v[i];
                p = i;
            }
        return p;
    }

    public float Media() {
        int i;
        float somma;
        somma = 0;

        for (i = 0; i < n; i++)
            somma = somma + v[i];
        somma = somma / n;
        return somma;
    }

    public String toString() {
        int i;
        String str = "";
        for (i = 0; i < n; i++)
            str = str + v[i] + "\t";
        return str;
    }

    public String toStringPos(int pos) {
        String str;
        if (pos >= 0 && pos < n)
            str = " " + v[pos];
        else
            str = "Posizione " + pos + " non valida";
        return str;
    }

    public int Elimina(int pos) {
        int i;
        if (pos >= 0 && pos < n) {
            for (i = pos; i < n; i++)
                v[i] = v[i + 1];
            n--;
            return 0;
        } else
            return -1;
    }
}
