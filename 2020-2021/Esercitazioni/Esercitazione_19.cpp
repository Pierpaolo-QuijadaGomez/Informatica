#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define n 12

using namespace std;

int main(){
    int cont = 1;
    int nmax;
    int num1;
    FILE *fi;
    fi = fopen("ricercadelmassimo.txt","r");//Apro il file IN LETTURA
    if(fi == NULL)
    {
        cout << "Errore nell'apertura del file" << endl;
    }
    fscanf(fi, "%d", &nmax);

    while(cont < n)
    {
        fscanf(fi, "%d", &num1);
        feof(fi);
        if(num1 > nmax)
        {
            num1=nmax;
        }
        cont++;
    }
    fclose(fi);         //Chiudo il file
    cout << nmax << endl;
}

