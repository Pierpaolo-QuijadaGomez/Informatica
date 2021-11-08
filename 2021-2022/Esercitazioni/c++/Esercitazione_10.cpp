#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;
 
//tabella Atleti
struct s_identita {
    string nome;
    string cognome;
};

struct s_nascita{
    int giorno;
    int mese;
    int anno;
};

struct s_atleti {
    int num_pettorale;
    s_identita Dati;
    string squadra;
    s_nascita DatiNascita;
} Atleti [100];

//tabella Risultati
struct s_arrivo{
    int ore;
    int minuti;
    int secondi;
};

struct s_risultati{
    int num_pettorina;
    s_arrivo Tempo;
} Risultati [100];  
 

 
int main()
{
    char scelta;
    int cont = 0, num_atleta, i, j, var_ore, var_secondi, var_minuti;
    bool verifica;
    
    do{
        do{
            cout << "\n1) Inserire un nuovo atleta";
            cout << "\n2) Inserire il tempo";
            cout << "\n3) Ordinare la classifica";
            cout << "\n4) Stampa il vincitore";
            cout << "\n5) Stampa la classifica finale";
            cin >> scelta;
        } while (scelta != '1' || scelta != '2' || scelta != '3' || scelta != '4' || scelta != '5');
    
        switch(scelta)
        {
            case '1': 
                cout << "\nNome: ";
                cin >> Atleti[cont].Dati.nome;
                cout << "\nCognome: ";
                cin >> Atleti[cont].Dati.cognome;
                cout << "\nSquadra: ";
                cin >>  Atleti[cont].squadra;
                cout << "\nNumero pettorina";
                cin >> Atleti[cont].num_pettorale;
                cout << "\nGiorno di nascita";
                cin >> Atleti[cont].DatiNascita.giorno;
                cout << "\nMese di nascita";
                cin >> Atleti[cont].DatiNascita.mese;
                cout << "\nAnno di nascita";
                cin >> Atleti[cont].DatiNascita.anno;
                cont ++;
                break;
 
            case '2':
                do{
                    cout << "\nQuale atleta si vuole scegliere: ";
                    cin >> num_atleta;  
                } while(num_atleta<0 || num_atleta>100);
            
                for(i=0; i<cont; i++){
                    if(num_atleta == Atleti[i].num_pettorale){
                        cout << "Atleta trovato" << endl;
                        cout << "\n1) Ore: ";
                        do{
                            cin >> Risultati[i].Tempo.ore;
                        } while (Risultati[i].Tempo.ore<0);
                        cout << "\n2) Minuti: ";
                        do{
                            cin >> Risultati[i].Tempo.minuti;
                        } while(Risultati[i].Tempo.minuti<0);
                        cout << "\n3) Secondi: ";
                        do{
                            cin >> Risultati[i].Tempo.secondi;
                        } while (Risultati[i].Tempo.secondi<0);
                    }
                    else{
                        cout << "Atleta non trovato" << endl;
                        verifica = false;
                    }
                }   
                    cout << "Impossibile eseguire la modifica" << endl;
                break;

            case '3':
                for(i=0; i<cont-1; i++){
                    for(j=0; j<cont-1-i; j++){
                        if((Risultati[j].Tempo.secondi)+(Risultati[j].Tempo.ore * 60) + (Risultati[j].Tempo.ore*3600) > (Risultati[j+1].Tempo.secondi)+(Risultati[j+1].Tempo.ore * 60) + (Risultati[j+1].Tempo.ore*3600)){
                            var_ore=Risultati[j].Tempo.ore;
                            var_secondi=Risultati[j].Tempo.secondi;
                            var_minuti=Risultati[j].Tempo.minuti;
                            Risultati[j].Tempo.secondi = Risultati[j+1].Tempo.secondi;
                            Risultati[j].Tempo.minuti = Risultati[j+1].Tempo.minuti;
                            Risultati[j].Tempo.ore = Risultati[j+1].Tempo.ore;
                            Risultati[j+1].Tempo.secondi = var_secondi;
                            Risultati[j+1].Tempo.minuti = var_minuti;
                            Risultati[j+1].Tempo.ore = var_ore;
                        }
                    }
                }
                break;

            case '4':
                cout << "Il vincitore è: "<< endl;
                cout << Risultati[0].num_pettorina;
                for(i=0; i<cont; i++){
                    if(Risultati[0].num_pettorina == Atleti[i].num_pettorale){
                        cout << "\t" << Atleti[i].Dati.nome << "\t" << Atleti[i].Dati.cognome << "\t" << Atleti[i].squadra << "\t" << Atleti[i].DatiNascita.giorno << "\t" << Atleti[i].DatiNascita.mese << "\t" << Atleti[i].DatiNascita.anno << endl;
                    }
                }
                break;
            
            case '5':
                cout << "La classsifica finale" << endl;
                for(i=0; i<cont; i++){
                    cout << Atleti[i].num_pettorale << "\t" << Atleti[i].Dati.nome << "\t" << Atleti[i].Dati.cognome << "\t" << Risultati[i].Tempo.ore << "\t" << Risultati[i].Tempo.minuti << "\t" << Risultati[i].Tempo.secondi << endl;
                }
        } 
    } while(1>0);
}
