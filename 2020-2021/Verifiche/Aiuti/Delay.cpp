#include <iostream>
#include <windows.h>

#define microseconds 100

using namespace std;

int main()
{
    int i;
    cout << endl;
    for(i=0;i<20;i++){
        cout<<"* ";
        Sleep(5*microseconds);
    }
}
