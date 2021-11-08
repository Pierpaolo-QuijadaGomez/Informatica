#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENTI_MASSIMI 100

using namespace std;

struct dati_voti{
    float scritto;
    float orale;
    float pratico;
};

struct dati_classe{
        string cognome;
        string nome;
        dati_voti Voti;
} Classe[STUDENTI_MASSIMI];

int main(){
    int num_studenti, i;
    float voto, media_max = 0;
    string risposta;

    do{
        cout << "Quanti studenti sono presenti(max= 24): " << endl;
        cin >> num_studenti;
    } while(num_studenti < 1 || num_studenti>24);

    for(i=0; i<num_studenti; i++){
        cout << "Nome: ";
        cin >> Classe[i].nome;
        cout << "Cognome: ";
        cin >> Classe[i].cognome;
        do{
           cout << "Voto pratico: ";
           cin >> Classe[i].Voti.pratico;  
        } while(Classe[i].Voti.pratico<2 || Classe[i].Voti.pratico>10);
        do{
           cout << "Voto orale: ";
           cin >> Classe[i].Voti.orale;  
        } while(Classe[i].Voti.orale<2 || Classe[i].Voti.orale>10);
        do{
           cout << "Voto scritto: ";
           cin >> Classe[i].Voti.scritto;  
        } while(Classe[i].Voti.scritto<2 || Classe[i].Voti.scritto>10);
    
    }
    cout << "\n\tStudenti" << endl;
    cout << "Nome\tCognome\tMedia" << endl;
    for(i=0; i<num_studenti; i++){  
        cout <<  Classe[i].nome;
        cout << "\t" << Classe[i].cognome;
        cout << "\t" << (float)(Classe[i].Voti.scritto + Classe[i].Voti.orale + Classe[i].Voti.pratico)/3 << endl;
        if(media_max < ((Classe[i].Voti.scritto + Classe[i].Voti.orale + Classe[i].Voti.pratico)/3))
            media_max=(Classe[i].Voti.scritto + Classe[i].Voti.orale + Classe[i].Voti.pratico)/3;    
    }
    cout << "\nLo studente migliore e': \n";
    for(i=0; i<num_studenti; i++){
        if(media_max == (Classe[i].Voti.scritto + Classe[i].Voti.orale + Classe[i].Voti.pratico)/3){
            cout <<  Classe[i].nome;
            cout << "\t" << Classe[i].cognome;
            cout << "\t" << media_max << endl;
        }
    }       
}