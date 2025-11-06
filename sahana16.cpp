#include<iostream>
using namespace std;

class Box{
private:
    int length;
    
public:
    Box(int l) : length(l) {}

    friend void printlength(const Box& b);
};
void printlength(const Box& b){
    cout<<"length of the box:"<<b.length<<endl;
}

int main(){
    Box box1(10);
    printlength(box1);
    return 0;
}  