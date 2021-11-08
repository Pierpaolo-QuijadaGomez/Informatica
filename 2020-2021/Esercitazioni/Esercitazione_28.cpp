#include <iostream>

using namespace std;
int N;
void asterischi();

int main()
{
    do{
        cout << "Inserire un valore mggiore di 0" << endl;
        cin >> N;
    }while(N<=0);
    asterischi();
    return 0;
}
void asterischi(){
int cont = N;
cout << cont << endl;
do{
    cout << "*" ;
    cont--;
} while(cont!=0);
}

