#include <iostream>
using namespace std;

class Y;
class X {
private:
    int data;

public:
    void setValue(int value) //Add methods here{
    {
        data = value;
    }
    friend void add(X,Y);
};
class Y {
private:
    int num;

public:
    void setValue(int value) //Add methods here{
    {
        num = value;
    }
    friend void add(X,Y);
};

void add(X o1,Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}

int main() {
    
X a1;
a1.setValue(1);

Y b1;

b1.setValue(2);

add(a1,b1); 

    return 0;
}