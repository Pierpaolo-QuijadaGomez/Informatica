#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

#define S 16
#define M 10

void riempimento_matrice();
void stampa_matrice();
void stampa_voti_materia();
void media_studente(int &y);
void materie_insufficienti(int &j);
void media_informatica(float &media_info);

int mat[M][S];
float vet[S];
int vet_2[S];

int main(){
    int x, y, j;
    float media_info;

    riempimento_matrice();
    stampa_matrice();
    stampa_voti_materia();
    for(y=0; y<16; y++)
        media_studente(y);
    cout << endl;
    for(x=0; x<16; x++)
        cout  << "La media dello studente " << x + 1 << " equivale a: " << vet[x] << endl;
    cout << endl << "Risultati: " << endl;
    for(j=0; j<16; j++){
        materie_insufficienti(j);
        if(vet_2[j] > 3)
            cout << "Alunno " << j+1 << " RESPINTO" << endl;
        if(vet_2[j]>=1 && vet_2[j]<=3)
            cout << "Alunno " << j+1 << " RIMANDATO" << endl;
        else
            cout << "Alunno " << j+1 << " PROMOSSO" << endl;
    }
        media_informatica(media_info);
        cout << "La media di informatica dell'intera classe equivale a: " << media_info << endl;
}

void riempimento_matrice(){
    int x, y, casuale;
    srand(time(NULL));

    for(y=0; y<16; y++)
        for(x=0; x<10; x++){
            casuale = 5 + rand() %6;
            mat[x][y] = casuale; 
        }
}

void stampa_matrice(){
    int x, y;

    for(y=0;y<16;y++){
        for(x=0;x<10; x++)
            cout << mat[x][y] << " ";
        cout << endl;
    }
}

void stampa_voti_materia(){
    int materia, x, y;

    cout << "\nMaterie:\n1)Italiano\n2)Storia\n3)Matematica\n4)Inglese\n5)Informatica\n6)Sistemi elet.\n7)Telecomunicazioni\n8)TPSI\n9)Scienze motorie\n10)Religione" << endl;

    do {
        cout << "Inserire la materia: "<< endl;
        cin >> materia;
    } while(materia<1 || materia>10);
    switch(materia) {
        case 1:
            cout << "Italiano: ";
            x=0;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        case 2:
            cout << "Storia: ";
            x=1;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        case 3:
            cout << "Matematica: ";
            x=2;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;  
        case 4: 
            cout << "Inglese: ";
            x=3;    
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        case 5:
            cout << "Informatica: ";
            x=4;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        case 6:
            cout << "Sistemi elet.: ";
            x=5;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        case 7:
            cout << "Telecomunicazioni: ";
            x=6;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        case 8:
            cout << "TPSI: ";
            x=7;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        case 9:
            cout << "Scienze motorie: ";
            x=8;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
        default:
            cout << "Religione: ";
            x=9;
            for(y=0; y<16; y++)
                cout << mat[x][y] << " ";
            break;
    }
}

void media_studente(int &y){
    int x;
    float media;
    for(x=0; x<10; x++)
        media = media + mat[x][y];
    media = (float) media / 10;
    vet[y] = media;
}

void materie_insufficienti(int &j){
    int insufficiente, x, y;
    for(x=0; x<10; x++){
        if(mat[x][j] == 5)
            insufficiente++;
    }
    vet_2[j] = insufficiente;
}

void media_informatica(float &media_info){
    int x=4, y;
    for(y=0; y<16; y++)
        media_info = media_info + mat[x][y];
    media_info = (float) media_info/S;
}