#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

#define MAXP 100

using namespace std;

typedef struct  {
  char cod[10];
  char desc[20];
  float pre;
  } PRODOTTI;           // Definisco il nuovo tipo record denominato PRODOTTI

int caricaTab(PRODOTTI t[]);
void stampaTab(PRODOTTI t[], int n);
void ordinamento(PRODOTTI t[], int n);


int main(){
    PRODOTTI t[MAXP];
    int n;

    n=caricaTab(t);
    ordinamento(t, n);

    if (n!=-1)
      stampaTab(t, n);

    else cout<<"ERRORE!"<<endl;

    return 0;
}

int caricaTab(PRODOTTI t[]){
    int i, n;
    FILE *fi;

    fi = fopen("Magazzino.txt","r");   //Apro il file IN LETTURA

    if(fi!=NULL)
    {
      fscanf(fi, "%d", &n);

      for (i=0;i<n;i++){
        fscanf(fi, "%s %s %f", &t[i].cod, &t[i].desc, &t[i].pre);
      }
      fclose(fi);
      return n;
    }
    else return -1;
}

void ordinamento(PRODOTTI t[], int n){
    int i, j;
    PRODOTTI tmp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n; j++){
            if(strcmp(t[j].cod, t[j+1].cod)>0){
                tmp = t[i];
                t[j]=t[i+1];
                t[i]=tmp;
            }
        }
    }
}

void stampaTab(PRODOTTI t[], int n){
    int i;
    cout << "Cod\tDesc\t\tPre"<<endl;
    for (i=0;i<n;i++){
        cout << left << setw(8) << t[i].cod << left << setw(16) << t[i].desc << left << setw(6) << t[i].pre<<endl;
      }
}
