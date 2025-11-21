#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void get() { cout << "Enter name: "; cin >> name; }
};

class Student : public Person {
public:
    int roll;
    void getData() { cout << "Enter roll number: "; cin >> roll; }
    void show() { cout << "Name: " << name << "\nRoll No: " << roll << endl; }
};

int main() {
    Student s;
    s.get();
    s.getData();
    s.show();
    return 0;
}
