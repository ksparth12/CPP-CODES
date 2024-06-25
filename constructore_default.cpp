#include <iostream>
using namespace std;

class complex {
private:
    int data1 , data2 , data3;

public:
    
    complex(int a=2,int b=5, int c=3) {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printnum();
    };

    void complex :: printnum(){
        cout << data1 << endl;
        cout << data2 << endl;
        cout << data3 << endl;
    }   

int main() {
    complex c1;
    c1.printnum();
    cout << "Hello, Parth!" << endl;
    return 0;
}