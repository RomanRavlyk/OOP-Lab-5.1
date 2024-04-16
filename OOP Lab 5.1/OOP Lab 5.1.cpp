#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
    Fraction b;

    cin >> b;
    cout << b << endl;

    cout << "Result of ipart: " << b.ipart();
    cout << b++ << endl;
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;
    
    return 0;
}