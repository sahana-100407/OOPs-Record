#include<iostream>
using namespace std;
class mark
{
    public:
    int maths;
    int science;
    marks()
    {
        cout<<"inside constructor"<<endl;
        cout<<"c++ object created"<<endl;
    }
};
int main()
{
    marks m1;
    marks m2;
    return 0;
}