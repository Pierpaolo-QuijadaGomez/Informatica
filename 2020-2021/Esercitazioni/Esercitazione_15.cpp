#include <iostream>

using namespace std;

int main()
{
    int somma,counter;
    counter = 10;

    while(counter <= 100){
        somma=somma+counter;
        counter=counter+5;
    }
    cout << somma << endl;

system ("PAUSE");
return 0;
}
