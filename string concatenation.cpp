#include <iostream>
#include <string>
using namespace std;

class String {
    string s;
public:
    String(string str = "") { s = str; }

    // Overload + operator for concatenation
    String operator+(const String& obj) {
        return String(s + obj.s);
    }

    void display() { cout << s << endl; }
};

int main() {
    String s1("Hello "), s2("World!");
    String s3 = s1 + s2; // Calls operator+()
    cout << "Concatenated string: ";
    s3.display();
    return 0;
}
