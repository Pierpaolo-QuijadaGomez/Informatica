#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
float num_casuale;
do{   
    srand(time(NULL));
    num_casuale = 1 + rand()%11;
    cout << "   Il numero casuale generato vale " << num_casuale << endl;
} while (num_casuale != 7);
return 0;
}


