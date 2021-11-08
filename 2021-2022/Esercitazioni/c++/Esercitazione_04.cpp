#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void giocata(int num_scelti[]);
void estrazioni(int num_estratti[]);
int controllo(int num_scelti[], int num_estratti[]);

int main(){
    int num_scelti[6], cont, preso;
    int num_estratti[90] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
    do{
        cout << "Quante giocate desideri fare: " << endl;
        cin >> cont; 
    } while(cont<0 || cont>100);

    while(cont!=0){
        giocata(num_scelti);
        estrazioni(num_estratti);
        preso = controllo(num_scelti, num_estratti);
        cout << "\nHai preso " << preso << " numeri" << endl;
        cont--;
    }
    
    
}

void giocata(int num_scelti[]){
    int i;
    for(i=0; i<6; i++){
        do{
            cout << "Inserire il numero" << endl;
            cin >> num_scelti[i]; 
        } while (num_scelti[i]<1||num_scelti[i]>90);
    }
}

void estrazioni(int num_estratti[]){
    int j, num_random, var;
    for(j=0; j<90; j++){
        num_random = rand() % 90;
        var = num_estratti[j];
        num_estratti[j] = num_estratti[num_random];
        num_estratti[num_random] = var;
    }
}

int controllo(int num_scelti[], int num_estratti[]){
    int i, j, preso;
    preso = 0;
    for(i=0; i<6; i++)
        cout << num_scelti[i] << ", ";
    cout << endl;
    for(j=0; j<6; j++)
        cout << num_estratti[j] << ", ";
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(num_scelti[i] == num_estratti[j])
                preso++;
        }
    }
    return preso;
}