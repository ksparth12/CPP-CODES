#include <iostream>
#include <fstream>
using namespace std;

template< class t1 =int , class t2 = float , class t3 = char >

class Parth {

public:
    t1 a;
    t2 b;
    t3 c;
    Parth(t1 x, t2 y, t3 z) : a(x) , b(y), c(z) {

        // a=x;
        // b=y;
        // c=z;

    }

    void display(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    }
     
};

int main() {
    cout << "Hello, Parth!" << endl;
    Parth<> p1(10, 20.5, 'A');
    p1.display();
    return 0;
}