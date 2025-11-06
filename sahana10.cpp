#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default constructor called." << endl;
    }
    MyClass(int x) {
        cout << "Constructor with one parameter called: x = " << x << endl;
    }
    MyClass(int x, int y) {
        cout << "Constructor with two parameters called: x = " << x << ", y = " << y << endl;
    }
};

int main() {
    MyClass obj1;          // Calls default constructor
    MyClass obj2(10);      // Calls constructor with one parameter
    MyClass obj3(20, 30);  // Calls constructor with two parameters

    return 0;
}
