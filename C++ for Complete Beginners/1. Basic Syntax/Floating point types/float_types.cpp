#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float fValue = 345678987.23;

    cout << fixed << fValue << endl;

    cout << scientific << fValue << endl;

    float fValue2 = 76.4;

    cout << setprecision(20) << "float: " << fixed << fValue2 << endl;

    cout << sizeof(float) << endl;

    double dValue = 76.4; // more precision

    cout << setprecision(20) << "float: " << fixed << dValue << endl;

    cout << "double has twice the number of significant " << 
    "figures than float" << endl;

    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    return 0;
}