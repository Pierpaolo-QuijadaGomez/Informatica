#include <iostream>
#include <time.h>
#include <stdlib.h>

#define RIGHE 5         // Num righe della matrice
#define COLONNE 7       // Num colonne della matrice

using namespace std;

void riempiPerRighe(int matrice[RIGHE][COLONNE], int righe, int colonne) {
  int x, y, n;
  
  srand(time(NULL));
  for (x=0;x<righe;x++){
    for(y=0;y<colonne; y++){
        n=rand()%51;
        matrice[x][y] = n;
  }
  }
}

void stampaPerRighe(int matrice[RIGHE][COLONNE], int righe, int colonne){
int x, y;
  
  for(x=0;x<righe;x++){
    for(y=0;y<colonne; y++)
      cout << matrice[x][y] << "  ";
    cout << endl;
  }
}

int main() {
    int righe, colonne;
    
    do{
      cout << "Quante righe(max. 5): ";
      cin >> righe;
    } while (righe > RIGHE);
    do{
      cout << "Quante colonne(max. 7): ";
      cin >> colonne;
    } while (colonne > COLONNE);
    
  int MAT[RIGHE][COLONNE];     // Dichiaro la matrice
  riempiPerRighe(MAT, righe, colonne);

  stampaPerRighe(MAT, righe, colonne);
}