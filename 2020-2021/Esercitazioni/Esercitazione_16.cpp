#include <iostream>

using namespace std;

int main (){
    int num, cont;

    cout << "Inserire il valore num: " << endl;
    cin >> num;
    for (cont=2;cont<num;cont=cont+2)
	    cout << cont << endl;

    system("PAUSE");
    return 0;
}