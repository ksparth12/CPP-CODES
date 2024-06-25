#include<iostream>
 
using namespace std;
 
int factorial (int n ){
    if (n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}

int fib(int n ){
    if (n <= 1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
int a;
cout<<"Enter the number of which factorial you want : "<<endl;
cin>>a;
cout<<factorial(a)<<endl;

cout<<"The term of fibonacci series at "<<a<<" is : "<<fib(a)<<endl;
 
return 0;
}