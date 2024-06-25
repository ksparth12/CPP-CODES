#include <iostream>
using namespace std;

class Base1 {
private:
    int anyVariable;

public:
    void greet(){
        cout<<"Good morning"<<endl;
    } 
};

class Base2 {
private:
    int anyVariable;

public:
    void greet(){
        cout<<"Good night"<<endl;
    } 
};

class Derived : public Base1, public Base2 {
    public:
    void greet(){
        Base1::greet();
    }
};

int main() {

  Base1 obj;
  obj.greet();

  Base2 obj1;
  obj1.greet();


  Derived obj2;
  obj2.greet();

    return 0;
}