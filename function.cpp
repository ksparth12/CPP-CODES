#include<iostream>
 
using namespace std;
 
int sum(int a,int b){
    int c = a+b;
    return c;
}

//a and b are formal parameters

int main()
{
 int num1,num2;
cin>>num1;
cin>>num2;
 
cout<<sum(num1,num2);
//num1 and num2 are actual parameters

return 0;
}