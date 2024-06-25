#include<iostream>
 
using namespace std;
 
int main()
{

cout<<"Using for loop"<<endl;
// for(initialization;condition;updation)
for (int i = 0; i <= 5; i++)
{
    cout<<i<<endl;
}

cout<<"Now with while loop"<<endl;

int i =0 ;

while(i<=5){
    cout<<i<<endl;
    i++;
}

cout<<"Now using do whille loop"<<endl;

do
{
    cout<<i<<endl;
        i++;
} while (i<=5);


return 0;
}