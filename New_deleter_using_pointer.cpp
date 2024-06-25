#include <iostream>
using namespace std;

class ClassName {
private:
    int anyVariable;

public:
     
};

int main() {
    // int a = 5;
    // int *ptr = &a;
    // *ptr = 10;

    int *a = new int(5) ;   //2nd method

    cout<<"The value of a is "<<*a<<endl;

    float *p = new float(7.30);
    cout<<"The value of p is "<<*p<< endl;
    cout<<"The value of p is "<<p<< endl;       //it will give address

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    // delete[] arr; 
    cout<<"The value of array 1 is "<<arr[0]<<endl;
    cout<<"The value of array 2 is "<<arr[1]<<endl;
    cout<<"The value of array 3 is "<<arr[2]<<endl;


    return 0;
}