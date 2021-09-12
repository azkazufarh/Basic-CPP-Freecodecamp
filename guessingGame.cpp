#include <iostream>
using namespace std;

int main() {
    int secretNumbers = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuess = false;

    while(secretNumbers != guess && !outOfGuess) {
        if (guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuess = true;
        }
    }

    if(outOfGuess) {
        cout << "You Lose!";
    } else {
        cout << "You Win!";
    }
}