#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() { cout << "Enter name: "; cin >> name; }
};

class Exam {
public:
    float marks;
    void getMarks() { cout << "Enter marks: "; cin >> marks; }
};

class Result : public Person, public Exam {
public:
    void show() { cout << "Name: " << name << "\nMarks: " << marks << endl; }
};

int main() {
    Result r;
    r.getName();
    r.getMarks();
    r.show();
    return 0;
}
