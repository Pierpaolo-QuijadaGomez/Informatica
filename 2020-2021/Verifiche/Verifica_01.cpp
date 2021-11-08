#include <stdio.h>
#include <stdlib.h>
#define CostoPicBurger 8
#define CostoJoeBurger 3
#define CostoPatatine 3



int main()
{
    int NumPicBurger;
    int NumJoeBurger;
    int NumTotConsu;
    int CostoTotPicBurger;
    int CostoTotJoeBurger;
    int NumPicBurgerNoMenu;
    int CostoTotPicBurgerNoMenu;
    int NumPicBurgerSiMenu;
    int PrezzoMenu;
    int CostoTotMenu;
    int IncassoTot;




    printf("Inserire il numero dei Pic Burger \n");
    scanf("%d", &NumPicBurger);
    printf("Inserire il numero dei Joe Burger \n");
    scanf("%d", &NumJoeBurger);

    NumTotConsu = NumJoeBurger+NumPicBurger;
    CostoTotPicBurger = NumPicBurger*CostoPicBurger;
    CostoTotJoeBurger = NumJoeBurger*CostoJoeBurger;
    NumPicBurgerNoMenu = NumPicBurger/2;
    CostoTotPicBurgerNoMenu = NumPicBurgerNoMenu*CostoPicBurger;
    NumPicBurgerSiMenu = NumPicBurger/2;
    PrezzoMenu = CostoPatatine+CostoPicBurger;
    CostoTotMenu = PrezzoMenu*NumPicBurgerSiMenu;
    IncassoTot= CostoTotMenu+CostoTotJoeBurger+CostoTotPicBurgerNoMenu;

    printf("Incasso Totale = %d\n Numero totale di consumazioni = %d\n Costo totale Pic Burger = %d\n Costo totale Joe Burger = %d", IncassoTot, NumTotConsu, CostoTotPicBurger, CostoTotJoeBurger);

    system("PAUSE");
    return 0;
