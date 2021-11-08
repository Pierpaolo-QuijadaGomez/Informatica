#include <iostream>

using namespace std;

int main()
{
    int num=0;
    do {
        cout << "Inserire un numero positivo: " << endl;
        cin >> num;
        if (num <=0)
            cout << "Allora chiariamoci, quando io ti chiedo un numero positivo mi dai un numero POSITIVO" << endl;
    } while (num <= 0);

    system ("PAUSE");
    return 0;
}

