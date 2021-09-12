#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if(gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main() {
    Student student1("Azka", "IT", 3.6);
    Student student2("Azzalfa", "IT", 2.8);

    cout << student1.hasHonors() << endl;

    return 0;
}