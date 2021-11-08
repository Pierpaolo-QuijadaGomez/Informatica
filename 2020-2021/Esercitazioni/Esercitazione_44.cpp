#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, lunghezza;
    string frase_2;
    cout << "Inserire una frase: " << endl;
    getline(cin, frase_2);
    lunghezza = frase_2.size();
    cout << "I caratteri che compongono la frase: " << endl;
    for(i=0; i<lunghezza; i++){
        cout << frase_2[i] << endl;
    }
    return 0;
}