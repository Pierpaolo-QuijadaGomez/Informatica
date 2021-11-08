#include <iostream>

using namespace std;

int main()
{
    int somma, cont;

    for (cont=10; cont<=100; cont=cont+5)
    {
        somma = somma + cont;
    }
    cout << somma << endl;

    system ("PAUSE");
    return 0;
}


