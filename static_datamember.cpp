#include<iostream>
 
using namespace std;
 
class Employee
{
private:
    int id;
    static int count;
public:
    void setdata(){
        cout<<"Enter id: ";
                cin>>id;
                count++;
    }
    void getdata(){
        cout<<"The ID of this employee is : " <<id<<endl;
    }
    static void getcount(void){
        cout<<"The total number of employees is : "<<count<<endl;
    }
};

int Employee::count = 0;

int main()
{

    Employee e1,e2,e3;

    e1.setdata();
    e1.getdata();
    e2.setdata();
    e2.getdata();
    e3.setdata();
    e3.getdata();
    Employee::getcount();

    
 
return 0;
}