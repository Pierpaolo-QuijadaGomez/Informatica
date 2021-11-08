#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
#define N 5
#define M 7

int TotRiga(int mat[N][M], int i);
int TotColonna(int mat[N][M], int j);
int Totale(int mat[N][M]);

int main(){
    int i, j, totr, totc, tot, n;
    int mat[N][M];
    srand(time(NULL));
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            mat[i][j] = 1+rand()%51;
        }
    }
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            cout << mat[i][j] <<" ";
        }
        cout << endl;
    }
    for (i=0; i<N;i++){
        totr = TotRiga(mat, i);
        cout << "La somma della riga " << i+1 << " vale: " << totr << endl;
    }
    for (j=0; j<M;j++){
        totc = TotColonna(mat, j);
        cout << "La somma della colonna " << j+1 << " vale: " << totc << endl;
    }
    tot = Totale(mat);
    cout << "Il totale dei valori della matrice vale: " << tot << endl;
}

int TotRiga(int mat[N][M], int i){
    int totr = 0;
    int r;
    for(r=0; r<M; r++){
        totr = totr + mat[i][r];
    }
    return totr;
}

int TotColonna(int mat[N][M], int j){
    int totc = 0;
    int c;
    for(c=0; c<N; c++){
        totc = totc + mat[c][j];
    }
    return totc;
}

int Totale(int mat[N][M]){
    int tot = 0;
    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            tot = tot + mat[i][j];
        }
    }
    return tot;
}
