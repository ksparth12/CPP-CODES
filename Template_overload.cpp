#include <iostream>
#include <fstream>
using namespace std;

template<class T>

class Parth {

    public:
        T data;
        Parth(T a){
            data = a;
            }

        void display(); 
};
template <class T>
void Parth<T> :: display(){
    cout<<"The value of data is : "<<data<<endl;
}


void func(int p){
    cout<<"This is my 1st function "<<p<<endl;
}

template<class T>
void func(T p){
    cout<<"This is my 2st function "<<p<<endl;
}

//Higher priority will be given to the function which have same match...

int main() {
    Parth<int> p (5);
    cout<< p.data<<endl;
    cout<<endl;
    func(511);
    return 0;
}