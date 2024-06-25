#include <iostream>
using namespace std;

class Item {
private:
    int id;
    float price;

public:
     void set_data(int i , float j){
         id = i;
         price = j;
     }
     void get_data(){
         cout<<"The id of the item is : "<<id<<endl;
         cout<<"The price of the item is : "<<price<<endl;
     }
};

int main() {
    // Item *ptr = new Item[3];
    // ptr[0].set_data(1,20); 
    // ptr[1].set_data(2,30);
    // ptr[2].set_data(3,40);
    // ptr[0].get_data();
    // ptr[1].get_data();
    // ptr[2].get_data();
    // for(int i=0;i<3;i++){
    //     cout<<"Enter the id and price of item "<<i+1<<endl;
    //     int id,price;
    //     cin>>id>>price;
    //     ptr[i].set_data(id,price);
    // }
    // for(int i=0;i<3;i++){
    //     ptr[i].get_data();
    // }
    // delete [] ptr;   
    int size;
    cout << "Enter the number of items: ";
    cin >> size;
    Item *ptr = new Item[size];
    Item *ptrTemp = ptr;
    int p,i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the id and price of item : "<<i+1<<endl;
        cin>>p>>q;
        ptr ->set_data(p,q);
        ptr ++;
    }

    for ( i = 0; i < size; i++){
        ptrTemp ->get_data();
        ptrTemp++;
    }
    


    return 0;
}