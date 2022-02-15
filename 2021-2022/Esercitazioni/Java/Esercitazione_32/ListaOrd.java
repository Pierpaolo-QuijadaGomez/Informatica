public class ListaOrd {
    private Atleta first;

    public ListaOrd() { // costruttore della classe ListaOrd
        // elemento fittizio
        first = new Atleta("", 1000);
        // elemento fittizio
        first.setNext(new Atleta("", 0));
    }

    public void push(String nome, int punt) {
        Atleta p1, p2;
        // Nuovo elemento da inserire
        Atleta a = new Atleta(nome, punt);

        // assegno al puntatore p1 il valore first
        p1 = first;
        for (p2 = first.getNext(); p2.getPunt() > punt; p2 = p2.getNext()) {
            p1 = p2; // assegno al puntatore p1 il valore p2
        }
        ;

        // aggiorno i puntatori
        p1.setNext(a); // assegno a p1 il punatore di a
        a.setNext(p2); // assegno ad a il puntatore di p2
    }

    public String pop(String nome) {
        Atleta p1, p2; // Dichiaro due puntatori della classe Atleta
        String s;
        // Ricerca dell'atleta
        p1 = first;
        for (p2 = first.getNext(); (!(p2.getNome().equals(nome)))
                && (p2.getNext() != null); p2 = p2.getNext()) {
            p1 = p2;
        }
        // controllo se i nomi sono gli stessi
        if (p2.getNome().equals(nome)) {
            p1.setNext(p2.getNext()); // elimino l'atleta da eliminare
            s = "Eliminato l'atleta " + nome;
        } else
            s = "L'atleta " + nome + " non è presente in elenco";
        return s;
    }

    public String toString() {
        String s = "";
        Atleta p;

        p = first.getNext();
        if (p.getNext() == null)
            s = "Lista vuota\n";
        else {
            while (p.getNext() != null) {
                s = s + p.getNome() + "\t" + p.getPunt() + "\n";
                p = p.getNext();
            }
        }
        return s;
    }

}
