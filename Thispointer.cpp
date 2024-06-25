#include <iostream>
using namespace std;

class A {
private:
    int a;

public:
    // A &  setdata(int a){
        void setdata(int a){
        this->a = a;
        // return *this;
    } 
    void getdata(){
        cout << a << endl;
    }
};

int main() {
    cout << "Hello, Parth!" << endl;
    A a;
    a.setdata(10);
    a.getdata();
    //Second way
    A *ptr = new A;
    ptr ->setdata(10);
    ptr ->getdata();

    return 0;
}