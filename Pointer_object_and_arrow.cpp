#include <iostream>
using namespace std;

class Complex {
private:
    int anyVariable;

public:
    int real;
    int imaginary;
    Complex(int reall, int imaginaryy) : real(reall) , imaginary(imaginaryy) {
        // real = reall;
        // imaginary = imaginaryy;
    }
    void print() {
        cout << real << " + " << imaginary << "i" << endl;
    }
     
};

int main() {
    cout << "Hello, Parth!" << endl;
    // Complex c1(1, 2);        //This will work
    // Complex *ptr = &c1;      //This will also work
    Complex *ptr = new Complex(1, 2);
    // c1.print();
    // (*ptr).print();      //This will work
    ptr -> print();         //Same as above
    /* This -> arrow means setdata of whose object is pointinf (Jis object kon point kr raha h uska set data) */


    return 0;
}