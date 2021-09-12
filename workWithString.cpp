#include <iostream>
using namespace std;
int main() {
    string phrase = "Giraffe Academy";

    cout << phrase.find("Academy", 0) << endl; //Because academy string start in 8 character from 0
    cout << phrase.substr(8, 3) << endl; //substr function have 2 index, 8 is catch a character, 3 is next 3 char after character catch
    

    return 0;
}