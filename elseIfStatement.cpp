#include <iostream>

using namespace std;

int main() {
    bool isMale = false;
    bool isTall = true;

    if(isMale && isTall) { //statement && (AND) check value both of these is true
        cout << "You are a tall male";
    } else if(isMale && !isTall) {
        cout << "You are a short male";
    } else if(!isMale && isTall) {
        cout << "You are tall but no male";
    }else { //
        cout << "You are a not male and tall";
    }

}