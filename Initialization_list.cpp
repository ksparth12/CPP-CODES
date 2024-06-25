#include <iostream>
using namespace std;

class Test {
private:
    int a,b;

public:
    // Test(int i, int j){      1st method
    //     a = i;
    //     b = j;

    // Test (int i , int j ) : a(i), b(j){          //  2nd method
    // Test (int i , int j ) : a(i), b(j+3){      //It will work
    // Test (int i , int j ) : a(i), b(j+a+2){      //It will work
    // Test (int i , int j ) : a(i+2), b(j){      //It will work
    // Test (int i , int j ) : a(i+b), b(j){       //Gives garbage value ,chek line 6, we initalized int a,b first , thats why.
// Test (int i , int j ) : a(i+b), b(j){       //Gives garbage value ,chek line 6, we initalized int a,b first , thats why.
        Test (int i , int j ) : a(i), b(j){
        cout<<"Constructor executed"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    } 
};

int main() {
    Test t1(10,20);
    cout << "Hello, Parth!" << endl;
    return 0;
}