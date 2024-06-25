#include<iostream>
 
using namespace std;
 
int main()
{
 
int a[] = {10,20,30,40,50};
 
for(int i = 0; i < 5; i++)
cout<<"The value of "<<i<<" student marks is : "<<a[i]<<endl;

int marks[]={95,96,97,98,99,100};
int *p = marks;

cout<<"The value of p is : "<<p<<endl;
cout<<"The value of *p is : "<<*p<<endl;
cout<<"The value of *(p+1) is : "<<*(p+1)<<endl;
cout<<"The value of *(p+2) is : "<<*(p+2)<<endl;
cout<<"The value of *(p+3) is : "<<*(p+3)<<endl;
cout<<"The value of *(p+4) is : "<<*(p+4)<<endl;
cout<<"The value of *(p+5) is : "<<*(p+5)<<endl;
 
return 0;
}