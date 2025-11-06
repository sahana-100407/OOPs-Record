#include <iostream>
using namespace std;

int main() {
    int *ptr;

    // Allocate memory dynamically
    ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "You entered: " << *ptr << endl;

    // Free the allocated memory
    delete ptr;

    return 0;
}
