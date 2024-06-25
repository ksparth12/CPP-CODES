#include<iostream>
 
using namespace std;
 
void swap(int &a,int &b){     //5      7
    int temp = a;
    a = b;         //a = 7
    b = temp;      //b = 5  
} 

int main()
{
 int num1 = 5 ,num2 = 7;
 cout << "Before swap: " <<num1<<num2<< endl;
 swap(num1,num2);
 cout << "After swap: " <<num1<<num2<< endl;
 
return 0;
}