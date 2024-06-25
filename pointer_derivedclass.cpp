#include <iostream>
using namespace std;

class BaseClass {
    public:
    int var_base;
     void setbase(int var_base){
        this->var_base = var_base;
     } 
     void display(){
        cout<<"The value of var base is "<<var_base<<endl;
     }
};

class DerivedClass : public BaseClass {
    public:
    int var_derived;
    void setderived(int var_derived){
        this->var_derived = var_derived;
    }
    void display(){
        cout<<"The value of var derived is "<<var_derived<<endl;
    }
};

int main() {
    cout << "Hello, Parth!" << endl;
    BaseClass * Base_Class_Pointer;
    DerivedClass * Derived_Class_Pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    Base_Class_Pointer = &obj_derived;  //Doesnt matter , if its either base or derived ... whosever pointer you made , it will use that class functions...
    Base_Class_Pointer = &obj_base; //Doesnt matter , if its either base , it will run for sure.
    Base_Class_Pointer->setbase(10);
    Base_Class_Pointer->display();
    // obj_base.setbase(7);
    // obj_base.display();

    return 0;
}