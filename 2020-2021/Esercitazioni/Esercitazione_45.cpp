#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    int i, lunghezza;
    string frase;
    cout << "Inserire una frase: " << endl;
    getline(cin, frase);
    lunghezza = frase.size();
    cout << endl << endl << "I caratteri che compongono la frase: " << endl;
    for(i=0; i<lunghezza; i++){
        frase[i] = toupper(frase[i]);
        if(frase[i] == 'A' | frase[i] == 'I' | frase[i] == 'O' | frase[i] == 'U'){
            frase[i] = 'E';
        }
    }
    cout << frase << endl;
    return 0;
}
