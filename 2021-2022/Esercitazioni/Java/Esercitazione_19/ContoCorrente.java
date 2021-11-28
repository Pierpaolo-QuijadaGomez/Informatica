package Esercitazione_19;

public class ContoCorrente {
    private String correntista; //
    private String nc; //
    private float saldo; //

    public ContoCorrente(String correntista, String nc) { //
        this.correntista = correntista;
        this.nc = nc;
        this.saldo = 0; //
    }

    public String getCorrentista() { //
        return correntista;
    }

    public String getNC() { //
        return nc;
    }

    public float getSaldo() { //
        return saldo;
    }

    public int prelievo(float s) { //
        int eseguito = 0;
        if (saldo > s) //
            saldo = saldo - s;
        else
            eseguito = 1;
        return eseguito;
    }

    public void versamento(float s) { //
        saldo = saldo + s;
    }

    public String toString() { //
        String s = "";
        s = s + "Nome" + getCorrentista() + " Numero: " + getNC();
        s = s + " Saldo: " + getSaldo();
        return s;
    }
}
