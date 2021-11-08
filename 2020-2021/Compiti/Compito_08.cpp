#include <iostream>
#include <conio.h>
using namespace std;

#define ACQUA 5000
#define CAFFE 200
#define THE_SOLUBILE 200
#define LATTE_IN_POLVERE 300
#define CACAO_IN_POLVERE 200
#define ZUCCHERO 500
#define BICCHIERI 200
#define CUCCHIAINI 300

float scelta_bevanda(int &scelta);
//int controllo_ingrdienti(int &scelta, int &num_cialde, int &num_acqua, int &num_the_solubile, int &num_latte_in_polvere, int &num_cacao_in_polvere, float &zucchero_totale, int &num_bicchieri, int &num_cucchiaini, float &gr_zucchero);
void pagamento(int &scelta);

int main(){
    int num_cialde = CAFFE;
    int num_acqua = ACQUA;
    int num_the_solubile = THE_SOLUBILE;
    int num_latte_in_polvere = LATTE_IN_POLVERE;
    int num_cacao_in_polvere = CACAO_IN_POLVERE;
    float zucchero_totale = ZUCCHERO;
    int num_bicchieri = BICCHIERI;
    int num_cucchiaini = CUCCHIAINI;
    int scelta;
    float gr_zucchero = scelta_bevanda(scelta);
    cout << "La quantita' di zucchero scelta e': " << gr_zucchero << " gr"<< endl;
   // int controllo = controllo_ingrdienti(scelta, num_cialde, num_acqua, num_the_solubile, num_latte_in_polvere, num_cacao_in_polvere, zucchero_totale, num_bicchieri, num_cucchiaini, gr_zucchero);
    pagamento(scelta);

}

float scelta_bevanda(int &scelta){
    int zucchero=3;
    float gr_zucchero;
    char car;
    do{
        cout << "Bevande\t\t\t\tPrezzo\n1) Caffe'\t\t\t0.50\n2) Caffe' ristretto\t\t0.50\n3) Caffe' lungo\t\t\t0.50\n4) Caffe' macchiato\t\t0.50\n5) Cappuccino\t\t\t0.60\n6) Cappuccino con cacao\t\t0.60\n7) Cioccolata calda\t\t0.70\n8) The\t\t\t\t0.60" << endl;
        cout << "Che bevanda si desidera consumare: ";
        cin >> scelta;  
    } while(scelta<1 || scelta>8);
    do{
        cout << "Zucchero (per aumentare + | per diminuire -) = " << zucchero << endl;
        car=getch();
        if (car=='+' && zucchero<6) zucchero++;
        if (car=='-' && zucchero>0) zucchero--;

    } while ((car=='+' || car=='-') && car!=13);
    switch (zucchero) {
        case 0:
            gr_zucchero = 0;
            break;
        case 1:
            gr_zucchero = 0.5;
            break;
        case 2:
            gr_zucchero = 1;
            break;
        case 3:
            gr_zucchero = 1.5;
            break;
        case 4:
            gr_zucchero = 2;
            break;
        case 5:
            gr_zucchero = 2.5;
            break;
        default:
            gr_zucchero = 3;
            break;
    }
    return gr_zucchero;
}/*
int controllo_ingredienti(int &scelta, int &num_cialde, int &num_acqua, int &num_the_solubile, int &num_latte_in_polvere, int &num_cacao_in_polvere, float &zucchero_totale, int &num_bicchieri, int &num_cucchiaini, float &gr_zucchero){
    switch(scelta){
        case 1:
            if(num_acqua>4 && num_cialde>1 && zucchero_totale>gr_zucchero && num_cucchiaini>1 && num_bicchieri>1){
                num_acqua-4;
                num_cialde--;
                zucchero_totale = zucchero_totale-gr_zucchero;
                num_cucchiaini--;
                num_bicchieri--;
                return 0;
            }
            if(num_cucchiaini<1 || zucchero_totale<gr_zucchero){
                num_bicchieri--;
                num_cialde--;
                num_acqua-4;
                return 1;
            }
            if(num_bicchieri<1 || num_acqua<4 || num_cialde<1)
                return -1;
            break;
        case 2:
            if(num_acqua>3 && num_cialde>1 && zucchero_totale>gr_zucchero && num_cucchiaini>1 && num_bicchieri>1){
                num_acqua-3;
                num_cialde--;
                zucchero_totale = zucchero_totale-gr_zucchero;
                num_cucchiaini--;
                num_bicchieri--;
                return 0;
            }
            if(num_cucchiaini<1 || zucchero_totale<gr_zucchero){
                num_bicchieri--;
                num_cialde--;
                num_acqua-3;
                return 1;
            }
            if(num_bicchieri<1 || num_acqua<3 || num_cialde<1)
                return -1;
            break;
        case 3:
            if(num_acqua>5 && num_cialde>1 && zucchero_totale>gr_zucchero && num_cucchiaini>1 && num_bicchieri>1){
                num_acqua-5;
                num_cialde--;
                zucchero_totale = zucchero_totale-gr_zucchero;
                num_cucchiaini--;
                num_bicchieri--;
                return 0;
            }
            if(num_cucchiaini<1 || zucchero_totale<gr_zucchero){
                num_bicchieri--;
                num_cialde--;
                num_acqua-5;
                return 1;
            }
            if(num_bicchieri<1 || num_acqua<5 || num_cialde<1)
                return -1;
            break;
        case 4:
            if(num_acqua>4 && num_cialde>1 && num_latte_in_polvere>1 && zucchero_totale>gr_zucchero && num_cucchiaini>1 && num_bicchieri>1){
                num_acqua-4;
                num_cialde--;
                zucchero_totale = zucchero_totale-gr_zucchero;
                num_cucchiaini--;
                num_bicchieri--;
                num_latte_in_polvere--;
                return 0;
            }
            if(num_cucchiaini<1 || zucchero_totale<gr_zucchero)
                return 1;
            if(num_latte_in_polvere<1){
                int car_3;
                do{
                    cout <<"Che ne dici di scegliere qualcos'altro? Premere invio" << endl;
                    car_3=getch();
                } while (car_3!=13);
                return 2;
            }
            if(num_acqua<4 || num_cialde<1 || num_bicchieri<1)
                return -1;
            break;
        case 5:
            if(num_acqua>10 && num_cialde>1 && num_latte_in_polvere>4 && zucchero_totale>gr_zucchero && num_cucchiaini>1 && num_bicchieri>1){
                num_acqua-10;
                num_cialde--;
                zucchero_totale = zucchero_totale-gr_zucchero;
                num_cucchiaini--;
                num_bicchieri--;
                num_latte_in_polvere-4;
                return 0;
            }
            if(num_cucchiaini<1 || zucchero_totale<gr_zucchero){
                num_bicchieri--;
                num_latte_in_polvere-4;
                num_cialde--;
                num_acqua-10;
                return 1;
            }
            if(num_latte_in_polvere<4){
                int car_3;
                do{
                    cout <<"Che ne dici di scegliere qualcos'altro? Premere invio" << endl;
                    car_3=getch();
                } while (car_3!=13);
                return 2;
            }
            if(num_acqua<10 || num_cialde<1 || num_bicchieri<1)
                return -1;
            break;
        case 6:
            if(num_acqua>10 && num_cialde>1 && num_latte_in_polvere>4 && num_cacao_in_polvere>1 && zucchero_totale>gr_zucchero && num_cucchiaini>1 && num_bicchieri>1){
                num_acqua-10;
                num_cialde--;
                zucchero_totale = zucchero_totale-gr_zucchero;
                num_cucchiaini--;
                num_bicchieri--;
                num_latte_in_polvere-4;
                num_cacao_in_polvere--;
                return 0;
            }
            if(num_cucchiaini<1 || zucchero_totale<gr_zucchero){
                num_bicchieri--;
                num_latte_in_polvere-4;
                num_cialde--;
                num_acqua-10;
                num_cacao_in_polvere--;
                return 1;
            }
            if(num_cacao_in_polvere<1 || num_latte_in_polvere<4){
                int car_3;
                do{
                    cout <<"Che ne dici di scegliere qualcos'altro? Premere invio" << endl;
                    car_3=getch();
                } while (car_3!=13);
                return 2;
            }
            if(num_acqua<10 || num_cialde<1 || num_bicchieri<1)
                return -1;
            break;
            default:
            break;
    }
    return 0;
}*/

void pagamento(int &scelta){
    float soldi_inseriti, prezzo, resto;
    char car_2;
    switch(scelta){
        case 1:
            prezzo = 0.5;
            break;
        case 2:
            prezzo = 0.50;
            break;
        case 3:
            prezzo = 0.50;
            break;
        case 4:
            prezzo = 0.50;
            break;
        case 5:
            prezzo = 0.60;
            break;
        case 6:
            prezzo = 0.60;
            break;
        case 7:
            prezzo = 0.70;
            break;
        default:
            prezzo = 0.60;
            break;
    }
    do{
        cout << "Inserire i soldi: ";
        cin >> soldi_inseriti;
        cout << endl << "Per uscire dalla modlita' di pagamneto premere il tasto CANC" << endl;
        car_2 = getch();
        cout << "Hai inserito: " << soldi_inseriti << endl;
        soldi_inseriti = soldi_inseriti + soldi_inseriti;
    } while(soldi_inseriti < prezzo && car_2 != 127);
    if(soldi_inseriti <= prezzo){
        resto = soldi_inseriti - prezzo;
        cout << "Passa domani per ritirare il resto pari a: " << resto << endl;
    }
}
