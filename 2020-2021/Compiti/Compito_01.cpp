#include <stdio.h>
#include <stdlib.h>
#define CostoRMin 15
#define CostoRMagg 18
#define CostoCe 7


int main()
{
    int RagazziMin, RagazziMagg, RTot, CostoTotMagg, CostoTotMin, RCe, CostoTotCe, IncassoTot;

    printf ("\nInserire il numero dei ragazzi minorenni\n");
    scanf ("%d", &RagazziMin);
    printf ("\nInserire il numero dei ragazzi maggiorenni\n");
    scanf ("%d", &RagazziMagg);

    RTot= RagazziMagg+RagazziMin;
    CostoTotMagg= CostoRMagg*RagazziMagg;
    CostoTotMin= CostoRMin*RagazziMin;
    RCe= RTot/2;
    CostoTotCe= RCe*CostoCe;
    IncassoTot= CostoTotCe+CostoTotMin+CostoTotMagg;

    printf ("\nIl numero totale dei ragazzi e' %d", RTot);
    printf ("\nIl costo totale per i maggiorenni e' %d", CostoTotMagg);
    printf ("\nIl costo totale per i minorenni e' %d", CostoTotMin);
    printf ("\nL'incasso totale e' %d\n", IncassoTot);

    system("PAUSE");
    return 0;
}
