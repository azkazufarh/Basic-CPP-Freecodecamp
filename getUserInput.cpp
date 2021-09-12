#include <iostream>

using namespace std;

int main() {
    int age; //you can change variabels for your needs

    cout << "Input your age : ";
    cin >> age;

    cout << "Your are " << age << " years old";

    string name;

    cout << "Enter your name";
    getline(cin, name); //getline is function for input entire string line of text, have 2 parameters cin and name variabels

    cout << "Hello" << name;

    return 0;
}