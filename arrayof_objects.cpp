#include<iostream>
 
using namespace std;
 
class Employee{

private:

int id;
int salary;

public:

void setID(void){
    salary = 100000;
    cout<<"Enter the id of the employee : "<<endl;
    cin>>id;
}

void getID(void){
    cout<<"The id of employee is : "<<id<<" , and his salary is : "<<salary<<endl; 
}

};

int main()
{
 
Employee google[5];

for (int i = 0; i < 5; i++)
{
    google[i].setID();
    google[i].getID();
}

 

 
return 0;
}