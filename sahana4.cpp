#include<iostream>
using namespace std;
class integer
{
    int m,n;
    public:
    integer()
    {
        m=0;
        n=0;
    }
    integer(int a,int b)
    {
        m=a;
        n=a;
    }
    void display()
    {
        cout<<"the value of m&n are"<<m<<n;
    }
};
int main()
{
    integer i1;
    i1.display();
    integer i2(10,20);
    i2.display();
    return 0;
}