#include<iostream>
 
using namespace std;
 
int main()
{
 int age;
 cout<<"Enter your age: ";
 cin>>age;  

switch (age)
{
case 18:

cout<<"You are 18";

    break;

default:

cout<<"You are not 18";

    break;
}

// cout<<"\nNo special case";
 
return 0;
}