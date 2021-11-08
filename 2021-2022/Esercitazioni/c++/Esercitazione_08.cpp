#include <iostream>
#include <stdio.h>
 
using namespace std;
struct s_dati
{
   string cognome;
   string nome;
   string materia;
   int ore_settimanali;
} Professori [10];
 
struct s_ore
{
   string cognome;
   string nome;
   string materia;
   int ore_settimanali;
} professori_longevi [10];
 
 
int main(){
  
   int i, j=0;
   cout << j << endl;
   for(i=0; i<10; i++){
       cout << "Nome: ";
       cin >> Professori[i].nome;
       cout << "Cognome: ";
       cin >> Professori[i].cognome;
       cout << "Materia: ";
       cin >> Professori[i].materia;
       do{
           cout << "Ore settimanali: ";
           cin >> Professori[i].ore_settimanali;
       } while(Professori[i].ore_settimanali <=0 || Professori[i].ore_settimanali > 24);
   }
 
   for(i=0; i<10; i++){
       cout << "Professore " << i+1 << endl;
       cout << Professori[i].nome << endl;
       cout << Professori[i].cognome << endl;
       cout << Professori[i].materia << endl;
       cout << Professori[i].ore_settimanali << endl;
       if(Professori[i].ore_settimanali > 8){
           professori_longevi[j].nome = Professori[i].nome;
           professori_longevi[j].cognome = Professori[i].cognome;
           professori_longevi[j].materia = Professori[i].materia;
           professori_longevi[j].ore_settimanali = Professori[i].ore_settimanali;
           j++;
       }
   }
 
   for(i=0; i<j; i++){
       cout << "Ecco i professori con piu' di 8 ore: " << endl;
       cout << professori_longevi[i].nome << endl;
       cout << professori_longevi[i].cognome << endl;
       cout << professori_longevi[i].materia << endl;
       cout << professori_longevi[i].ore_settimanali << endl;
   }
}

