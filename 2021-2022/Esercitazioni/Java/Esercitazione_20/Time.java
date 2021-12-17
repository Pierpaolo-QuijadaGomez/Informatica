public class Time {
    private int ore;
    private int minuti;
    private int secondi;

    public Time(int ore, int minuti, int secondi) {
        this.ore = ore;
        this.minuti = minuti;
        this.secondi = secondi;
    }

    public void setOre(int ore_2) {
        ore = ore_2;
    }

    public void setMinuti(int minuti_2) {
        minuti = minuti_2;
    }

    public void setSecondi(int secondi_2) {
        secondi = secondi_2;
    }

    public int getOre() {
        return ore;
    }

    public int getMinuti() {
        return minuti;
    }

    public int getSecondi() {
        return secondi;
    }

    public void addTime(Time t) {
        ore = ore + t.getOre();
        minuti = minuti + t.getMinuti();
        secondi = secondi + t.getSecondi();
        if (secondi > 59) {
            minuti++;
            secondi = secondi - 60;
        }
        if (minuti > 59) {
            ore++;
            minuti = minuti - 60;
        }

        if (ore > 23)
            ore = ore - 24;
    }

    public void subTime(Time t) {
        ore = ore - t.getOre();
        minuti = minuti - t.getMinuti();
        secondi = secondi - t.getSecondi();
        if (secondi < 0) {
            minuti--;
            secondi = 60 + secondi;
        }

        if (minuti < 0) {
            ore--;
            minuti = 60 + minuti;
        }

        if (ore < 0) {
            ore = 24 + ore;
        }

    }

    public String toString() {
        String s = "";
        s = s + "Ore: " + getOre() + " \nMinuti: " + getMinuti() + " \nSecondi: " + getSecondi();
        return s;
    }
}
