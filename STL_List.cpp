#include <iostream>
#include <list>
using namespace std;


void display(list<int> &lst){       //&lst is used to start the count from 0 while iterating
    list<int> :: iterator it;       // Always use list<int> , not the actuall list name.
    for ( it = lst.begin() ; it != lst.end(); it++)
    {
            cout << *it ;       //* operator is used to get the value , as we used & to get address
    }
    cout<<endl;
}
int main() {
    cout << "Hello, Parth!" << endl;


    list<int> mylist;   //List of 0 length    

    mylist.push_back(7);    //It will help to push(insert) the elements into the list
    mylist.push_back(8);
    mylist.push_back(79);
    mylist.push_back(75);
    mylist.push_back(73);
    // mylist.pop_back();   //It will pop(delete) this element from the list
    mylist.push_back(72);

    // list<int> :: iterator iter ;
    // iter = mylist.begin();
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;

    display(mylist);

    list<int> mylist2(3);   
    list<int> :: iterator iter = mylist2.begin();
    *iter = 50;     //Here's how can you push(insert) elements into the list.(In an empty list)
    iter++;
    *iter = 53;
    iter++;
    *iter = 55;
    iter++;

    display(mylist2);



    return 0;
}