public class ContoCorrente {
    private String correntista;   // Inizializzo l'attributo correntista
    private String nc;            // Inizializzo l'attributo nc
    private float saldo;          // Inizializzo l'attributo saldo
   
    public ContoCorrente(String correntista, String nc){   // Dichiaro l'oggetto ContoCorrente
      this.correntista = correntista;
      this.nc = nc;
      this.saldo = 0;             // Istanzio l'oggetto
    }
   
    public String getCorrentista(){   // Metodo getCorrentista
      return correntista;
    }
   
    public String getNC(){            // Metodo grtNC
      return nc;
    }
   
    public float getSaldo(){          //metodo getSaldo
      return saldo;
    }
   
    public int prelievo (float s){    //metodo Prelievo
      int eseguito = 0;
      if (saldo>s)                    //se il saldo e' sufficiente esego il prelievo
        saldo = saldo - s;
      else
        eseguito=1;
      return eseguito;
    }
   
    public void versamento (float s){   //metodo versamento
      saldo = saldo + s;
    }
   
    public String toString(){         //metodo toString
      String s="";
      s = s + "Nome" + getCorrentista() + " Numero: " + getNC();
      s = s + " Saldo: " + getSaldo();
      return s;
    }
  }
  