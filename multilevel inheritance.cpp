#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() { cout << "Enter name: "; cin >> name; }
};

class Student : public Person {
public:
    int roll;
    void getRoll() { cout << "Enter roll no: "; cin >> roll; }
};

class Marks : public Student {
public:
    float marks;
    void getMarks() { cout << "Enter marks: "; cin >> marks; }
    void show() {
        cout << "\nName: " << name << "\nRoll No: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    Marks m;
    m.getName();
    m.getRoll();
    m.getMarks();
    m.show();
    return 0;
}
