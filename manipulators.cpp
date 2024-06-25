#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
 
 int a = 79, b=806, c=9133;

 cout<<"The value of a without setw is : "<<a<<endl;
 cout<<"The value of b without setw is : "<<b<<endl;
 cout<<"The value of c without setw is : "<<c<<endl;

//Setw basically right justify the value.

 cout<<"The value of a is : "<<setw(5)<<a<<endl;
 cout<<"The value of c is : "<<setw(5)<<b<<endl;
 cout<<"The value of b is : "<<setw(5)<<c<<endl;

return 0;
}   