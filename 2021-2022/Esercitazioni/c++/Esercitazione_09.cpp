#include <iostream>
#include <stdlib>
#include <stdio.h>

#define MAX_COPERTI 20

using namespace std;

void scelta();
void cancellamento_ordine();
void conto();
void pagamento();
void riempimento_menu();

struct s_menu_pizze{
    int codice;
    string nome;
    float prezzo;
} Pizze [6];

struct s_menu_bevande{
    int numero;
    string bevanda;
    float costo;
} Bevande [6];

struct s_ordinazione_tavolo{
    int persone;
    s_ordinazione_persona Persona;
} Tavolo [15];

struct s_ordinazione_persona{
    int ordine_pizza;
    int ordine_bevanda;
    float costo_totale;
}

char scelta;
int num_tavolo;
int vet[15] = Tavolo;

int main(){
    riempimento_menu();
    do{
        scelta();
        if(scelta == '1') ordine();
        if(scelta == '2') cancellamento_ordine();
        if(scelta == '3') conto();
        if(scelta == '4') pagamento();
    } while(1);
}

void riempimento_menu(){
    int var = 0;

    //men pizze
    for(int i=0; i<6; i++){
        Pizze[i].codice = var++;
    }
    Pizze[0].nome = "Margherita";
    Pizze[1].nome = "Napoletana";
    Pizze[2].nome = "Funghi";
    Pizze[3].nome = "Prosciutto";
    Pizze[4].nome = "Bufala";
    Pizze[5].nome = "Quattro Stagioni";
    Pizze[0].prezzo = 5;
    Pizze[1].prezzo = 5.5;
    Pizze[2].prezzo = 6;
    Pizze[3].prezzo = 6;
    Pizze[4].prezzo = 7;
    Pizze[5].prezzo = 8;

    var = 0;
    //menu bevande
    for(int i=0; i<6; i++){
        Bevande[i].numero = var++;
    }
    Bevande[0].bevanda = "Acqua Nat.";
    Bevande[1].bevanda = "Acqua Gas.";
    Bevande[2].bevanda = "Cola piccola";
    Bevande[3].bevanda = "Cola grande";
    Bevande[4].bevanda = "Birra piccola";
    Bevande[5].bevanda = "Birra grande";
    Bevande[0].costo = 2;
    Bevande[1].costo = 2;
    Bevande[2].costo = 3;
    Bevande[3].costo = 4.5;
    Bevande[4].costo = 3.5;
    Bevande[5].costo = 5;
}

void scelta(){
    cout << "\n1) Inserire un nuovo ordine";
    cout << "\n2) Cancellare un ordine";
    cout << "\n3) Conto";
    cout << "\n4) Pagamento";
    do{
        cin >> scelta;
    } while(scelta!='1' || scelta!='2' || scelta!='3' || scelta!='4' || scelta!='5');
}

void ordine(){
    cout << "A quale tavolo si vuole fare la nuova ordinazione: ";
    do{
        cin >> num_tavolo;
    } while (num_tavolo<0 || num_tavolo>15);

    


}