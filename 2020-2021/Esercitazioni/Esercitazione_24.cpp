#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int numeri;
    int cont;
    int numero_casuale;
    int i;
    FILE * file1;

    file1 = fopen("numeri_casuali.txt","w");
    if(file1!=NULL)
    {
        for(numeri =0; numeri < 1000; numeri++){
            fprintf(file1, "\n");
                for(i=1; i<=10; i++){
                        fprintf(file1, "%d, ", 1+rand() %10);
                }
        }
        fprintf(file1, "Sono stati stampati: %d numeri\n", numeri);
    }
    else cout << "Errore nell'apertura del file\n";

    fclose(file1);
    file1 = fopen("numeri_casuali.txt","r");
    for(cont = 1; cont <= 1000; cont++){
        fscanf(file1, "%d\n", &numero_casuale);
        cout << "Il numero in posizione " << cont << " vale: " << numero_casuale << endl;
    }
    cout << "Sono stati stampati 1000 numeri" << endl;
    fclose(file1);

}

