#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a = 0) {   
        x = a;
    }

    void display() {
        cout << "x = " << x << endl;
    }

    void operator-() {
        x = -x;
    }

    void operator++() {
        ++x;
    }
};

int main() {
    Number n1(10);

    cout << "Initial value: ";
    n1.display();

    -n1;  
    cout << "After applying unary minus: ";
    n1.display();

    ++n1;  
    cout << "After applying pre-increment: ";
    n1.display();

    return 0;
}
