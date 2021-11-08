#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int num;
    do{
        cout << "Inserisci un numero" << endl;
        cin >> num;
        counter++;
    } while (num != 0);
    cout << "Hai inserito " << --counter << " numeri" << endl;	
    system ("PAUSE");
    return 0;
}
