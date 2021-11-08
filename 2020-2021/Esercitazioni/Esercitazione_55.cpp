#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

typedef struct  {
  string nome;
  string indirizzo;
  int eta;
  } PERSONA;           // Definisco il nuovo tipo record denominato PERSONA

int main() {
    int i;
    PERSONA Agenda[3]; // Definisco una tabella "Agenda" di tipo PERSONA
    srand(time(NULL));
    for(i=0; i<3; i++){
        int n = 20 + rand()%21;
        Agenda[i].eta = n;
    }
    Agenda[0].nome = "Mario";
    Agenda[1].nome = "Carlo";
    Agenda[2].nome = "Luigi";
    Agenda[0].indirizzo = "Via S.Donato 1";
    Agenda[1].indirizzo = "Via S.Michele 14";
    Agenda[2].indirizzo = "Via Cors.Giulio Cesare 1";

    for(i=0; i<3; i++){
        cout << "Persona " << i+1 <<":\n";
        cout << "Nome: " << Agenda[i].nome << endl;
        cout << "Indirizzo: " << Agenda[i].indirizzo << endl;
        cout << "Eta: " << Agenda[i].eta << endl << endl;
    }    
}