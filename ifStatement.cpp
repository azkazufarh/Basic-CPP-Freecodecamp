#include <iostream>
using namespace std;
int main() {
    bool isMale = false;

    if(isMale) { //statement check value is true
        cout << "You are a male";
    } else {
        cout << "You are a female";
    }

    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall) { //statement && (AND) check value both of these is true
        cout << "You are a tall male";
    } else {
        cout << "You are a not male";
    }

    bool isMale = false;
    bool isTall = true;

    if(isMale || isTall) { //statement || (OR) check value one of these is true
            cout << "You are a tall male";
        } else {
            cout << "You are a not male";
        }


    return 0;
}