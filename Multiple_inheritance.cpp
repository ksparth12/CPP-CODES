#include <iostream>
using namespace std;

class Base1 {
protected:
    int Base1int;

public:
     void setBase1(int a){
        Base1int = a;
     }
};

class Base2 {
protected:
    int Base2int;

public:
     void setBase2(int a){
        Base2int = a;
     }
};

class Derived : public Base1, public Base2 {
    public:
    void display(){
        cout<<"The value of Base 1 is : "<<Base1int<<endl;
        cout<<"The value of Base 2 is : "<<Base2int<<endl;
        cout<<"The sum of there value is : "<<Base1int + Base2int <<endl;
    }
};

int main() {
    cout << "Hello, Parth!" << endl;
    Derived d;
    d.setBase1(10);
    d.setBase2(20);
    d.display();
    return 0;
}