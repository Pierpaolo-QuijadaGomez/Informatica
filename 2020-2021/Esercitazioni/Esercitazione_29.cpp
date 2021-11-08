#include <iostream>

using namespace std;
void asterischi();
void righe();
int num_casuale;

int main()
{
    righe();
    return 0;
}
void asterischi(){
    for(int i = num_casuale; i != 0 ; i--){
        cout << "*";
    }
    cout << endl;
}
void righe(){
    for(int i = 1;i <= 10; i++){
        num_casuale = 2 + rand() %11;
        asterischi();
    }
}
