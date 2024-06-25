#include<iostream>
 
using namespace std;
 
class Shop{
    public:
    int ItemID[100];
    int price[100];
    int counter;

    void init_counter(void){counter = 0;}
    void setPrice(void);
    void display(void);
};

void Shop :: setPrice(void){
    cout << "Enter the Item ID of the product: ";
    cin >> ItemID[counter];
    cout << "Enter the quantity of the product: ";
    cin >> price[counter];
    counter++;
}

void Shop :: display(void){
     for (int i = 0; i < counter; i++) { 
        cout << "Item ID: " << ItemID[i] << ", Price: " << price[i] << endl;
    }
}

int main()
{
 
Shop dukaan;
dukaan.init_counter();
dukaan.setPrice();
dukaan.setPrice();
dukaan.setPrice();
dukaan.display();
 
return 0;
}