#include <iostream>
#include <cmath> //tell library math function

using namespace std;

int main() {
    cout << pow(2, 5) << endl; // pow means power, so in case 2 power 5 is 32 (2x2x2x2x2 = 32)

    cout << sqrt(100) << endl; // sqrt means square root (akar dari)

    cout << round(5.1) << endl; // round means nearest number decimal from number real

    cout << ceil(3.1) << endl; // ceil means round up to number

    cout << floor(5.89) << endl; // floor means round down to number

    cout << fmax(3, 10) << endl; // fmax means choose a bigger number

    cout << fmin(3, 10) << endl; // fmax means choose a little number
}