#include <iostream>
#define CostoCopiaCOL 0.8
#define CostoCopiaBN 0.1
#define CostoRilegatura 1,3
using namespace std;

int main()
{

    int NumCopieBN, NumCopieCOL, CopieTotali;
    float CostoTotBN, CostoTotCOL, CostoTotFascicolo;

    cout << "Inserire il numero di copie in bianco/nero: " << endl;
    cin >> NumCopieBN;
    cout << "Inserire il numero di copie a colori: " << endl;
    cin >> NumCopieCOL
    ;

    CopieTotali = NumCopieBN+NumCopieCOL;
    CostoTotBN = CostoCopiaBN*NumCopieBN;
    CostoTotCOL = CostoCopiaCOL*NumCopieCOL;
    CostoTotFascicolo = CostoTotBN + CostoTotCOL + CostoRilegatura;

    cout<<"Il numero di fotocopie e'"<<CopieTotali<<endl;
    cout<<"Il costo totale delle fotocopie in B/N e'"<<CostoTotBN<<endl;
    cout<<"Il costo totale delle fotocopie COL e'"<<CostoTotCOL<<endl;
    cout<<"Il costo totale del fascicolo e'"<<CostoTotFascicolo<<endl;


    system("PAUSE");

    return 0;
}
