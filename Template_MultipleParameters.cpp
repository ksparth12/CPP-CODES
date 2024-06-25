#include <iostream>
#include <fstream>
using namespace std;

template<class t1, class t2>

class ClassName {
    public:
    t1 data1;
    t2 data2;
    ClassName(t1 a, t2 b) {
        data1 = a;
        data2 = b;
    }

    void display(){
        // cout << data1 << endl;
        // cout << data2 << endl;
        cout<<this->data1<<endl;
        cout<<this->data2<<endl;

    }
     
};

int main() {
    cout << "Hello, Parth!" << endl;
    ClassName<int, float> obj(10, 20.5);
    obj.display();
    return 0;
}