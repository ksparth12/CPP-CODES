#include<iostream>
 
using namespace std;
 
int main()
{
 
typedef struct employee
{
    int id ;
    char favchar ;
    float salary ; 
}ep;

struct employee e1;
ep parth;

e1.id = 14367;
e1.favchar = 'a';
e1.salary = 1000.00;

parth.id = 14367;

parth.favchar = 'z';

parth.salary = 10000000.00;

cout<<"The id of parth is : "<<parth.id<<endl;
cout<<"The fav char of parth is : "<<parth.favchar<<endl;
cout<<"The fav salary of parth is : "<<parth.salary<<endl;


union money
{
    int ruppee ;
    char euro ;
    float dinar ;
};


//union is same as struct but have better mmemory management

union money m1;

m1.dinar = 199.99;
// m1.ruppee = 200;

cout<<"The dinar of m1 is : "<<m1.dinar<<endl;

enum Meal {breakfast, lunch , dinner };

cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;
 
return 0;
}