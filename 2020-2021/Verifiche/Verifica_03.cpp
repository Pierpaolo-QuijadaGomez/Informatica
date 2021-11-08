#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
#define N 12

void generaVet(int vet[]);
void stampaVet(int vet[]);
void calcolaVet_num(int vet[], int &num_presenze_tot, int &num_presenze_estive);
void calcoloVet_mesi(int vet[], int &mese_max, int &mese_min);

int main()
{
    int i, num_presenze_tot, num_presenze_estive, mese_max, mese_min, media_annuale, media_no_estate;
    int vet[N];
    generaVet(vet);
    stampaVet(vet);
    calcolaVet_num(vet, num_presenze_tot, num_presenze_estive);
    calcoloVet_mesi(vet, mese_max, mese_min);
    media_annuale = num_presenze_tot/N;
    media_no_estate = (num_presenze_tot - num_presenze_estive)/9;
    cout << endl << endl << "Presenze TOTALI nell'anno: " << num_presenze_tot <<   endl;
    cout << "Presenze nei mesi ESTIVI: " << num_presenze_estive << endl;
    cout << "Mese con MENO presenze: " << mese_min << endl;
    cout << "Mese con PIU' presenze: " << mese_max << endl;
    cout << "Media presenze nell'anno: " << media_annuale << endl;
    cout << "Media presenze esclusi mesi estivi: " << media_no_estate << endl;
    return 0;
}
void generaVet(int vet[]){
    int i;
    int n = 0;
    int m = 0;
    srand(time(NULL));
    for(i=0; i<N; i++){
        n = 50+rand()%50;
        if(i>4 && i<8){
            m = 100+rand()%200;
            vet[i] = m;
        }
        else{
            vet[i] = n;
        }
    }
}
void stampaVet(int vet[]){
    int i, b=1;
    cout << "Albergo *****" << endl << endl;
    cout << "Mese\tPresenze" << endl;
    for (i=0; i<N; i++){
        cout << b << "\t" << vet[i] << endl;
        b++;
    }
}

void calcolaVet_num(int vet[], int &num_presenze_tot, int &num_presenze_estive){
    int i;
    num_presenze_estive = 0;
    num_presenze_tot = 0;
    for(i=0; i<N; i++){
        num_presenze_tot = num_presenze_tot + vet[i];
        if(i>=5 && i<8){
            num_presenze_estive = num_presenze_estive + vet[i];
        }
    }
}

void calcoloVet_mesi(int vet[], int &mese_max, int &mese_min){
    int i;
    mese_max = vet[0];
    mese_min = vet[0];
    for(i=1; i<N; i++){
        if(vet[i] > mese_max){
            mese_max = vet[i];
        }
        if(vet[i] < mese_min){
            mese_min = vet[i];
        }
    }
}