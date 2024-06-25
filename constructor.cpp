#include <iostream>
using namespace std;

class Complex {


public:
    int a, b;

    Complex (void){
    a=7;
    b=1; 
}

    void printNum() {
        cout<<"The number is "<<a<< " + " <<b<< "i"<<endl;
    }

};


int main() {
    cout << "Hello, Parth!" << endl;
    Complex c1;
    c1.printNum();
    return 0;
    
}



// #include <iostream>
// using namespace std;

// // Define a class to represent complex numbers
// class Complex
// {
// public:
//     // Data members: real and imaginary parts of the complex number
//     int a, b;

//     // Default constructor to initialize the complex number
//     Complex(void)
//     {
//         // Initialize the real and imaginary parts to 7 and 1, respectively
//         a = 7;
//         b = 1;
//     }

//     // Method to print the complex number in the format "a + bi"
//     void printNum()
//     {
//         cout << "The number is " << a << " + " << b << "i" << endl;
//     }
// };

// int main()
// {
//     // Print a greeting message
//     cout << "Hello, Parth!" << endl;

//     // Create an instance of the Complex class
//     Complex c1;

//     // Call the printNum method to display the complex number
//     c1.printNum();

//     return 0;

// }