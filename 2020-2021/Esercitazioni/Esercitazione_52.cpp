#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

#define N 9
int mat[N][N];
float vet[N];
int n;

void riempimento_matrice();
void calcolo_media();
void controllo_vet(int &val_minori, int &val_maggiori);
void ordine_vet();
void stampa_matrice();
void stampa_vet();


int main(){
    int val_minori, val_maggiori;
    do{
        cout << "Inserisci un valore minore di 10: ";
        cin >> n;
    } while(n >= 10 || n <= 0);
    riempimento_matrice();
    calcolo_media();
    controllo_vet(val_minori, val_maggiori);
    cout << endl << "I valori minori di 10 sono: " << val_minori << endl;
    cout << "I valori maggiori uguali a 10 sono: " << val_maggiori << endl;
    ordine_vet();
    stampa_matrice();
    stampa_vet();
}

void riempimento_matrice(){
    int i, j, casuale;
    srand(time(NULL));

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            casuale = 1 + rand() %20;
            mat[i][j] = casuale; 
        }
    }
}

void calcolo_media(){
    int i, j, somma;
    float media;
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            somma = somma + mat[i][j];
        media =(float) somma / n;
        vet[i] = media;
        somma = 0;
    }
}

void controllo_vet(int &val_minori, int &val_maggiori){
    int i;
    val_minori = 0;
    val_maggiori = 0;
    for(i=0; i<n; i++){
        if(vet[i] < 10)
        val_minori++;
        else 
        val_maggiori++;
    }
}

void ordine_vet(){
    int x, y;
    int temp;
    for (x = 0; x < N - 1; x++){
        for (y = 0; y < N - 1 - x; y++)
            if (vet[y] > vet[y + 1]){
            temp = vet[y];
            vet[y] = vet[y + 1];
            vet[y + 1] = temp;
        }
    }
}

void stampa_matrice(){
    int x, y;
    for(x=0;x<n;x++){
    for(y=0;y<n; y++)
      cout << mat[x][y] << "  ";
    cout << endl;
  }
}

void stampa_vet(){
    int x;
    cout << endl;
    for(x=0; x<n; x++)
        cout << "Il valore della cella " << x << " vale: " << vet[x] << endl;
}
