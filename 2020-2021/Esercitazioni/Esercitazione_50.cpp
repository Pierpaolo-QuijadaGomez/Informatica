#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define N 5
#define M 7
int MaxRiga(int mat[N][M], int r);
int MediaColonna(int mat[N][M], int c);
int Minimo(int mat[N][M]);
void Riempimento_Matrice(int mat[N][M]);

int main(){
    int media, riga, r, c, scelta, min;
    int mat[N][M];
    Riempimento_Matrice(mat);
    do{
        cout << "\t MENU'" << endl;
        cout << "1) Massimo di ogni riga\n2) Media di ogni colonna\n3) Minimo della matrice" << endl;
        cout << "Che operazione vuoi eseguire(per andarsene dal programma premre 0): ";
        cin >> scelta;
        switch(scelta) {
            case 1: 
                for(r=0;r<N;r++){
                    riga = MaxRiga(mat, r);
                    cout << "Il valore massimo della riga " << r+1 << " e': " << riga << endl;
                }   
            break;
            case 2:
                for(c=0; c<M; c++){
                    media = MediaColonna(mat, c);
                    cout << "La media della colonna " << c+1 << " e': " << media << endl;
                }
            break;
            case 3:
                min = Minimo(mat);
                cout << "Il valore minimo della matrice vale: " << min << endl;
            break;
            default:
                if(scelta!=0){
                    cout << "Inserisci un valore accettabile !!!" << endl << endl;
                }
                else{
                    cout << "Grazie e arrivederci :)" << endl;
                }
            break; 
        }
    } while(scelta!=0);
}

int MaxRiga(int mat[N][M], int r){
    int max = mat[r][0];
    int j;
    for(j=0; j<M; j++){
        if(mat[r][j] > max){
            max = mat[r][j];
        }
    }
    return max;
}

int MediaColonna(int mat[N][M], int c){
    int med = 0;
    int i;
    for(i=0; i<N; i++){
        med = med + mat[i][c];
    }
    med = med/N;
    return med;
}

int Minimo(int mat[N][M]){
    int min = mat[0][0];
    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            if(mat[i][j] < min){
                min = mat[i][j];
            }
        }
    }
    return min; 
}
void Riempimento_Matrice(int mat[N][M]){
    srand(time(NULL));
    int i, j, n;
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            n = rand()%51;
            mat[i][j] = n;
        }
    }
    for(i=0;i<N;i++){
    for(j=0;j<M; j++){
      cout << mat[i][j] << "  ";
    }
    cout << endl;
  }
}

