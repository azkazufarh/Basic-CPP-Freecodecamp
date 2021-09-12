#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Mad Libs Games
    string color, pluralNoun, celebrity;

    cout << "Enter a color : ";
    getline(cin, color);
    cout << "Enter a plural noun : ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity : ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity;

    return 0;
}