#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int flag = 1;
    int num1, numx;
    FILE *fi;
    fi = fopen("numeri.txt","r");
    fscanf(fi, "%d", &num1);
    while(!feof(fi) && flag ==1){
            fscanf(fi, "%d", &numx);
            if(numx < num1){
                flag = 0;
            }
            else{
                num1 = numx;
            }
    }
    if(flag == 1){
        cout << "Serie ordinata" << endl;
    }
    else{
        cout << "Serie non ordinata" << endl;
    }
    system("PAUSE");
    return 0;
}
