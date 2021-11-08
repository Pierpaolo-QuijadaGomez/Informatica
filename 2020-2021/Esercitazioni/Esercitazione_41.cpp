#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void caricaVet_da_Tastiera(int vet[], int dimensione_logica);
void caricaVet_da_File(int vet[], int dimensione_logica);
void caricaVet_Casuali(int vet[], int dimensione_logica);
bool cercaVet(int vet[], int dimensione_logica, int val_da_cercare);
float mediaVet(int vet[], int dimensione_logica);
void min_massimoVet(int vet[], int dimensione_logica, int &massimo, int &minimo);
int pari_dispariVet(int vet[], int vet2[], int vet3[], int dimensione_logica);

#define D 100

int main(){
    bool ricerca;
    float media;
    int vet[D];
    int vet2[D];
    int vet3[D];
    int dimensione_logica, val_da_cercare, massimo, minimo, i, cont_dispari, cont_pari;
    char scelta;
    char scelta2;
    do{
        cout << "Quanti numeri voui mettere dentro il vettore (da 1 a 100): ";
        cin >> dimensione_logica;
    } while(dimensione_logica<=0 | dimensione_logica>D);
    cout << "Come vuoi inserire i valori ?" << endl << endl;
    cout << "A) Input da tastiera" << endl << "B) Input da file" << endl << "C) Con valori casuali" << endl;
    do{
        cout << "Inserire la propria scelta: ";
        cin >> scelta;
        cout << endl;
    } while (scelta!='A' && scelta!='B' && scelta!='C');
    switch (scelta){
        case 'A':
            caricaVet_da_Tastiera(vet, dimensione_logica);
            break;
        case 'B':
            caricaVet_da_File(vet, dimensione_logica);
            break;
        case 'C':
            caricaVet_Casuali(vet, dimensione_logica);
            break;
        default:
            cout << "Il carattere inserito non e' valido" << endl;
            break;
    }
    cout << endl << "Che opereazione vuoi eseguire sul vettore ?" << endl;
    cout << "A) Media dei valori del vettore" << endl << "B) Ricerca di un valore in un vettore" << endl << "C) Ricerca dei valori minimo e massimo" << endl << "D) Suddivisione dei valori pari e dispari in due vettori differenti" << endl;
    do{
        cout << "Inserire la propria scelta: ";
        cin >> scelta2;
        cout << endl;
    } while(scelta2!='A' && scelta2!='B' && scelta2!='C' && scelta2!='D');
    switch (scelta2){
        case 'A':
            media = mediaVet(vet, dimensione_logica);
            cout << "La media del vettore vale: " << media;
            break;
        case 'B':
            cout << "Che valore vuoi cercare: ";
            cin >> val_da_cercare;
            ricerca = cercaVet(vet, dimensione_logica, val_da_cercare);
            if(ricerca==true)
                cout << "Il valore e' stato trovato" << endl;
            else
                cout << "Il valore non e' stato trovato" << endl;
            break;
        case 'C':
            min_massimoVet(vet, dimensione_logica, massimo, minimo);
            cout << "Il valore massimo vale: " << massimo << endl;
            cout << "Il valore minimo vale: " << minimo << endl;
            break;
        case 'D':
            cont_pari = pari_dispariVet(vet, vet2, vet3, dimensione_logica);
            cont_dispari = dimensione_logica-cont_pari;
            for (i=0; i<cont_pari; i++){
                cout << "I numeri pari sono: " << vet3[i] << endl;
            }
            for(i=0; i<cont_dispari; i++){
                cout << endl << "I nuemri dispari sono: " << vet2[i] << endl;
            }
            break;
        default:
            cout << "Il carattere inserito non e' valido";
    }
}

void caricaVet_da_Tastiera(int vet[], int dimensione_logica){
    int i;
    for(i=0; i<dimensione_logica;i++){
        cout << "Inserire il valore della cella " << i << " : ";
        cin >> vet[i];
    }
}

void caricaVet_da_File(int vet[], int dimensione_logica){
    int i;
    FILE*fi;
    fi=fopen("prova.txt", "r");
    if(fi!=NULL){
        for(i=0; i<dimensione_logica; i++){
            fscanf(fi, "%d", &vet[i]);
        }
    }
    else
        cout << "Impossibile aprire il file" << endl;
    fclose (fi);
}

void caricaVet_Casuali(int vet[], int dimensione_logica){
    int n, i;
    srand(time(NULL));
    for(i=0; i<dimensione_logica; i++){
        n = 1+rand()%500;
        vet[i] = n;
    }
}

float mediaVet(int vet[], int dimensione_logica){
    float media;
    int somma, i, cont = 0;
    for(i=0; i<dimensione_logica; i++){
        somma = somma + vet[i];
        cont++;
    }
    media = (float)somma / cont;
    return media;
}

bool cercaVet(int vet[], int dimensione_logica, int val_da_cercare){
    int i, flag=0;
    bool ricerca;
    for(i=0; i<dimensione_logica; i++){
        if(vet[i]==val_da_cercare)
            flag++;
        else
            flag = flag;
    }
    if(flag>=1)
        return true;
    else
        return false;
}

void min_massimoVet(int vet[], int dimensione_logica, int &massimo, int &minimo){
    int i;
    massimo = vet[0];
    minimo = vet[0];
    for(i=1; i<dimensione_logica; i++){
        if(massimo < vet[i]){
            massimo = vet[i];
        }
        if(minimo > vet[i])
            minimo = vet[i];
    }
}
int pari_dispariVet(int vet[], int vet2[], int vet3[], int dimensione_logica){
    int i, cont_pari=0, cont_dispari=0;
    for(i=0; i<dimensione_logica; i++){
        if (vet[i] %2==0){
            vet3[cont_pari] = vet[i];
            cont_pari++;
        }
        else{
            vet2[cont_dispari] = vet[i];
            cont_dispari++;
        }
    }
    return cont_pari;
}







