/* ok so jab ham class ka pointer bnate hai aurr usse jab ham derived class
ke object ko point krte hai , tabb ham kuch bhi krle functions sirf base class ke hi
run hongee agr functions same name se hai toh , but virtual functions mai aisa nahi hota hai !! */

#include <iostream>
using namespace std;

class Baseclass {

    public:

    int var_base=5;
    // void set_base(int var_base){
    //     this->var_base = var_base;
    // }
    virtual void printvalues(){
        cout << "The value of var_base = " << var_base << endl;
    }   
     
};

class Derivedclass : public Baseclass {
    public:
    int var_derived=7;
    // void set_derived(int var_derived){
    //     this->var_derived = var_derived;
    // }
    void printvalues(){
        cout << "The value of var_derived = " << var_derived << endl;
    }   
};


int main() {

//     Baseclass * Basepointer;
//     Derivedclass * Derivedpointer;
//     Baseclass obj_base;
//     Derivedclass obj_derived;
//     Basepointer = &obj_derived;
//     Basepointer->set_base(10);
//     Basepointer->printvalues();
// //Iska mtlb hai fark hi nhi pdta ki kiska object hai , bss pointer jiska hai uski hi chlegi...
//comment out isliye kara kyuki yeh virtual functions ke liye file hai ...

        Baseclass * Basepointer;
        Derivedclass obj_derived;
        Basepointer = &obj_derived;
        Basepointer->printvalues();

//ab kyuki maine baseclass ke function ko vitural krdiya hai esiliye ab
//derived class ka object lene pr , derived class ka hi function run hoga...

    return 0;
}