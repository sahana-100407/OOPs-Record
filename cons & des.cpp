#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object created." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};

int main() {
    Demo obj;  // Constructor is called here
    cout << "Inside main function." << endl;
    return 0;  // Destructor is called automatically here
}
