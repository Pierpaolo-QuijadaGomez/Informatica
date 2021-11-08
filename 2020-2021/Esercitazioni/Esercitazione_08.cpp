#include <iostream>

using namespace std;

int main()
{
    float a, b, x;

    cout << "Inserire il valore di a: " << endl;
    cin >> a;
    cout << "Inserire il valore di b: " << endl;
    cin >> b;
    if (a==0){
        if (b==0)
            cout << "L'equazione e' indeterminata" << endl;
        else
            cout << "L'equazione e' impossibile" << endl;
    }
    else{
        x=b/a;
        cout << "X vale = " << x <<endl;
    }
    system("PAUSE");
    return 0;
}
