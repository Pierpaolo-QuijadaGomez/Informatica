#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int zucchero=3;
    char car;


    do{
        cout << "Zucchero = " << zucchero << endl;
        car=getch();
        if (car=='+' && zucchero<6) zucchero++;
        if (car=='-' && zucchero>0) zucchero--;

    } while ((car=='+' || car=='-') && car!=13);

}
