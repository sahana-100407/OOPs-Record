#include<iostream>
using namespace std;
class student 
{
    public:
    string name;
    int roll;
    float marks;
    void display() 
    {
        cout<<"student name:"<<name<<endl;
        cout<<"roll number:"<<roll<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main() {
  student s1;
  cout<<"Enter student name:";
  cin>>s1.name;
  cout<<"Enetr roll number:";
  cin>>s1.roll;
  cout<<"Enter marks:";
  cin>>s1.marks;
  cout<<"\n---student information---\n";
  s1.display();
  return 0;  
}
