#include<iostream>
 
using namespace std;
 
class Employee{
    private:
    int a,b,c;
    public:
    int d,e;

    void setData(int a1, int b1 , int c1);
    void getData(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }

};

void Employee::setData(int a1, int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
 
Employee e1;
e1.d=4;
e1.e=5;
e1.setData(1,2,3);
e1.getData();

 
return 0;
}