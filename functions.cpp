#include <iostream>

using namespace std;

// create functions sayHi, have 2 parameters name and age
// void can tell a cpp for do anything return of variabels
void sayHi(string name, int age) {
    cout << "Hello " << name << ", your age is " << age << " years old" << endl;
}

int main() {
    sayHi("Azka", 18); //call function and input parameter
    sayHi("Azkia", 14); //call function and input parameter
    sayHi("Azzalfa", 4); //call function and input parameter
}