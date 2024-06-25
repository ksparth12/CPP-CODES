#include<iostream>
 
using namespace std;
 
int moneyreceived(int moneyhave,float factor=1.06){
    return (float)(moneyhave*factor);
}

int main()
{
 int currentmoney;
cout<<"Enter the amount of money you have in  your bank account : "<<endl;
 cin>>currentmoney;
 cout<<"The amount of money you have in your bank account after 6 months : "<<moneyreceived(currentmoney)<<endl;

 cout<<"The amount of money you have in your bank account after 12 months : "<<moneyreceived(currentmoney,1.08)<<endl;
return 0;
}