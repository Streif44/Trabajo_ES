#include <iostream>
using namespace std;

void legacyFunction(int x){
    int i,j,k,l;

    if (x > 10)
        if (x > 20)
            cout << "Muy grande" << endl;
        else
            cout << "Grande" << endl;
    else
        cout << "Pequeño" << endl;

    
    if (x == x)
        cout << "Siempre verdad" << endl;
}
