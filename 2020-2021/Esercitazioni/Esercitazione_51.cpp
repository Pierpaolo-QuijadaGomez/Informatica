#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

#define RIGHE 20         // Num righe della matrice
#define COLONNE 20       // Num colonne della matrice
#define MAX 99         // Massimo numero casuale

using namespace std;

int N;

void quadrataMat(int M1[RIGHE][COLONNE]);
void mostraMat(int mat[RIGHE][COLONNE]);
void azzeraMat(int mat[RIGHE][COLONNE]);
void diagonaleMat(int mat[RIGHE][COLONNE]);
void scalareMat(int mat[RIGHE][COLONNE]);
void unitariaMat(int mat[RIGHE][COLONNE]);
void simmetricaMat(int mat[RIGHE][COLONNE]);
void traspostaMat(int mat[RIGHE][COLONNE]);
int sommaDiag(int mat[RIGHE][COLONNE]);

int main(){

  int M1[RIGHE][COLONNE];

  do{
    cout << "Inserire l'ordine della matrice: ";
    cin >> N;
  }  while(N<2 || N>20);

  quadrataMat(M1);
  int somma = sommaDiag(M1);
  cout << "\n\n*** Matrice quadrata ***\n";
  mostraMat(M1);
  traspostaMat(M1);
  cout << "\n\n*** Matrice traspostata ***\n";
  mostraMat(M1);
  azzeraMat(M1);
  scalareMat(M1);
  cout << "\n\n*** Matrice scalare ***\n";
  mostraMat(M1);
  azzeraMat(M1);
  unitariaMat(M1);
  cout << "\n\n*** Matrice unitaria ***\n";
  mostraMat(M1);
  simmetricaMat(M1);
  cout << "\n\n*** Matrice simmetrica ***\n";
  mostraMat(M1);
  azzeraMat(M1);
  diagonaleMat(M1);
  cout << "\n\n*** Matrice diagonale ***\n";
  mostraMat(M1);
  
  cout << endl << "La somma dei valori nella diagonale della prima matrice equivale a: " << somma << endl;
}

void quadrataMat(int M1[RIGHE][COLONNE]){
  int i, j;
  srand(time(NULL));

  for (i=0; i<N; i++)
    for (j=0; j<N; j++)
      M1[i][j]=1+rand()%MAX;   //Inserisce un num casuale nella matrice
}

void mostraMat(int mat[RIGHE][COLONNE]){
  int i, j;
  for(i=0; i<N; i++){
    cout << endl;
    for(j=0; j<N; j++)
      cout << setw(3) << mat[i][j];
  }
}
void azzeraMat(int mat[RIGHE][COLONNE]){
    int i,j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            mat[i][j]=0;
        }
    }
}
void diagonaleMat(int mat[RIGHE][COLONNE]){
    srand(time(NULL));
    int i;
    for(i=0; i<N; i++){
        mat[i][i] = 1+rand()%MAX;
    }
}

void scalareMat(int mat[RIGHE][COLONNE]){
    srand(time(NULL));
    int n = rand()%MAX;
    int i;
    for(i=0; i<N; i++){
        mat[i][i]=n;
    }
}

void unitariaMat(int mat[RIGHE][COLONNE]){
    int i;
    for(i=0; i<N; i++){
        mat[i][i]=1;
    }
}

void simmetricaMat(int mat[RIGHE][COLONNE]){
    int i, j;
    for(i=0;i<N; i++){
        for(j=0; j<N; j++){
            mat[i][j] = 1+rand()%MAX;
        }
    }
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            mat[i][j] = mat [j][i];
        }
    }
}

void traspostaMat(int mat[RIGHE][COLONNE]){
    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            mat[j][i] = mat[i][j];
        }
    }
}

int sommaDiag(int mat[RIGHE][COLONNE]){
    int i, somma;
    for(i=0; i<N; i++){
        somma = somma + mat[i][i];
    }
    return somma;
}