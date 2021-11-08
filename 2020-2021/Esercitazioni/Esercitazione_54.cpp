#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct  {
  string nome;
  string indirizzo;
  int eta;
  } PERSONA;           // Definisco il nuovo tipo record denominato PERSONA

int main() {
  PERSONA Pers; // Definisco una variabile strutturata "pers" di tipo PERSONA
  Pers.eta = 16;
  Pers.indirizzo = "Via Malone 40";
  Pers.nome = "Pierpaolo";

  cout << "Nome: " << Pers.nome << endl;
  cout << "Indirizzo: " << Pers.indirizzo << endl;
  cout << "Eta': " << Pers.eta << endl;
}

