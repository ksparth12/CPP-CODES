#include<iostream>
 
using namespace std;
 
int main()
{
 

int a = 5;
int *b = &a;

//* is value at 
//& is address of

cout<<"The value of a is : "<<a<<endl;
cout<<"The value of b is : "<<b<<endl;
cout<<"The value of *b is : "<<*b<<endl;
cout<<"The value of &a is : "<<&a<<endl;
cout<<"The value of &b is : "<<&b<<endl;
 
return 0;
}