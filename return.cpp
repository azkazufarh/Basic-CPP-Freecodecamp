#include <iostream>

using namespace std;

//double means return the value of this function is double (decimal)
double cube (double num) {
    /* double result = num * num * num;
    return result; */
    return num * num * num;
    // after return all algorith down after return is no running, bccause return means stop run algorithm here.
}

int main() {
    double answer = cube(2.5);
    cout << answer << endl;

    return 0;
}