#include <stdio.h>
#include <stdlib.h>

#define CostoCopiaCOL 0.8
#define CostoCopiaBN 0.1
#define CostoRilegatura 1,3

int main()
{

    int NumCopieBN, NumCopieCOL, CopieTotali;
    float CostoTotBN, CostoTotCOL, CostoTotFascicolo;

    printf("\nInserire il numero di copie in bianco/nero: ");
    scanf("%d", &NumCopieBN);
    printf("\nInserire il numero di copie a colori: ");
    scanf("%d", &NumCopieCOL);
    
    CopieTotali = NumCopieBN+NumCopieCOL;
    CostoTotBN = CostoCopiaBN*NumCopieBN;
    CostoTotCOL = CostoCopiaCOL*NumCopieCOL;
    CostoTotFascicolo = CostoTotBN + CostoTotCOL + CostoRilegatura;

    printf("\n\nIl numero totale di fotocopie e' %d", CopieTotali);
    printf("\n\nIl costo totale delle fotocopie BN e' %5.2f", CostoTotBN);
    printf("\n\nIl costo totale delle fotocopie COL e' %5.2f", CostoTotCOL);
    printf("\n\nIl costo totale del fascicolo e' %5.2f\n\n", CostoTotFascicolo);

    system("PAUSE");

    return 0;
}

