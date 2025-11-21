#include <iostream>
using namespace std;

class Outer {
public:
    int outerData = 100;

    class Inner {
    public:
        void display() {
            cout << "Inside Inner class" << endl;
        }
    };
};

int main() {
    Outer::Inner obj;
    obj.display();

    return 0;
}
