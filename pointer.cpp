#include <iostream>
using namespace std;
int main() {
    // Pointer  is type data from get memory address, to write a pointer should use & on the variabel
    int age = 19;
    int *pAge = &age; //* means to return value address in memory 
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &age << endl;
    cout << *pAge << endl;
}