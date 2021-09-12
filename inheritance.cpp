#include <iostream>
using namespace std;

class Chef {

    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class italianChef : public Chef { //get class from Chef
    public :
        void makePasta() {
            cout << "The chef makes Pasta" << endl;
        }
        void makeSpecialDish() {
                cout << "The chef makes beef steaks" << endl;
        }
};

int main() {
    Chef chef;
    chef.makeSpecialDish();

    italianChef ItalianChef;
    ItalianChef.makeSpecialDish();

    return 0;
}