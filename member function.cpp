#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    float price;
    void getDetails();
    void displayDetails();
};
void book::getDetails()
{
    cout<<"Enter book title:";
    cin>>title;
    cout<<"Enter author name:";
    cin>>author;
    cout<<"Enter book price:";
    cin>>price;
}
void book::displayDetails()
{
    cout<<"\n---book Details---\n";
    cout<<"title:"<<title<<endl;
    cout<<"author:"<<author<<endl;
    cout<<"price:"<<price<<endl;
}
int main()
{
    book b1;
    b1.getDetails();
    b1.displayDetails();
    return 0;
}
