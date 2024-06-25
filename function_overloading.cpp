#include<iostream>
 
using namespace std;
 
int add(int a , int b ){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

int main()
{
 int a,b,c;
cout<<"Enter the numbers : "<<endl;
cin>>a>>b>>c;
 
cout<<add(a,b)<<endl;
cout<<add(a,b,c)<<endl;
 
return 0;
}