#include <iostream>
#include <stdlib.h>
#define MAXP 100

using namespace std;

typedef struct {
    char cod[10];
    char desc[30];
    float pre;
} PRODOTTI;

int caricaTabella(PRODOTTI t[]){
    FILE*fi;
    int i, n;
    fi=fopen("magazzino.txt", "r");
    if(fi==NULL)
        n=1;
    else{
        fscanf(fi, "%d", &n);
        for(i=0; i<n; i++)
            fscanf(fi, "%s %s %f", &t[i].cod, &t[i].desc, &t[i].pre);
    }
    fclose(fi);
    return n;
}

void stampaTabella(PRODOTTI t[], int n){
    int i;
    cout << "Elenco prodotti" << endl;
    cout << "codice\tprezzo\tdescrizione" << endl;
    for(i=0; i<n; i++)
        cout << t[i].cod << "\t" << t[i].pre << "\t" << t[i].desc <<endl;
}

int main(){
    PRODOTTI t[MAXP];
    int n;

    n=caricaTabella(t);
    if(n!=1)
        stampaTabella(t, n);
    else
        cout << "Errore dell'apertura del file" << endl;
    return 0;
}