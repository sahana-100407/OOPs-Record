#include <iostream>
using namespace std;

void myFunction() {
    // Local class inside myFunction
    class Local {
    public:
        void display() {
            cout << "Hello from Local class inside myFunction!" << endl;
        }
    };

    Local obj;
    obj.display();
}

int main() {
    myFunction();
    return 0;
}
