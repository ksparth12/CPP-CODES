#include <iostream>
#include <fstream>
using namespace std;

template<class T>

class Vector{
    public:
    T * arr;
    int size;

    Vector(int m){
        size = m;
        arr = new T[size];
    }

    T dotproduct(Vector &v){
       T d = 0;
       for (int i = 0; i < size; i++)
       {
        d += this->arr[i] * v.arr[i];
       }
       return d;

    }
     
};

int main() {
    cout << "Hello, Parth!" << endl;

    Vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.5;
    v1.arr[2] = 3.6;

    Vector <float> v2(3);
    v2.arr[0] = 4.5;
    v2.arr[1] = 5.6;
    v2.arr[2] = 6.7;

    float a = v1.dotproduct(v2);
    cout<< a << endl;

    return 0;
}