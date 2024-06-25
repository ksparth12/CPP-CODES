#include <iostream>
using namespace std;

class BaseClass
{
private:
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void BaseClass :: setdata()
{
    data1 = 10;
    data2 = 20;
}

int BaseClass :: getdata1()
{
    return data1;
}

int BaseClass :: getdata2()
{
    return data2;
};

class DerivedClass : public BaseClass {

int data3;

public:

void process();
void display();

};

void DerivedClass :: process(){
    data3  = data2 * getdata1();
}

void DerivedClass :: display(){
    cout<<"The value of data 1 is : "<<getdata1()<<endl;
    cout<<"The value of data 2 is : "<<data2<<endl;
    cout<<"The value of data 3 is : "<<data3<<endl;
}

int main()
{
    DerivedClass obj;
    obj.setdata();
    obj.process();
    obj.display();
    return 0;
}