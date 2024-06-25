#include <iostream>
using namespace std;

class Base1 {
private:
    int data1;

public:
    Base1(int r){
        data1 = r;
        cout<<"Base1 constructor is called. "<<endl;
    }
    void printbase1(){
        cout<<"This is base 1 "<<endl;
    }
     
};

class Base2 {
private:
    int data2;

public:
    Base2(int r){
        data2 = r;
        cout<<"Base2 constructor is called. "<<endl;
    }
        void printbase2(){
        cout<<"This is base 2 "<<endl;
    }
     
};

class Derived : public Base1, public Base2 {
    int data3;
    int data4;
    public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
        data3 = c;
        data4 = d;
        cout<<"Derived constructor is called. "<<endl;
    }
    void printderived(){
        cout<<"The value of derived1 is "<<data3<<endl;
        cout<<"The value of derived2 is "<<data4<<endl;
    }

    // void printbase1(){
    //     Base2 :: printbase1();      To solve ambiguity
    // }
};

int main() {
    cout << "Hello, Parth!" << endl;
    Derived d(1,2,3,4);
    d.printbase1();
    d.printbase2();
    // d.Base1::printbase1(); // Explicitly call printbase1 from Base1
    // d.Base2::printbase1(); // Explicitly call printbase1 from Base2

    d.printderived();
    return 0;
}