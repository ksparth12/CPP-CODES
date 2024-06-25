#include <iostream>
#include <fstream>
using namespace std;

// template< class T>
// void swap (T &a, T &b){
//     T temp = a;
//     a=b;
//     b=temp;
// }
template< class t1, class t2 >
float funadd(t1 x , t2 y){
    return x+y;
}

int main() {
    cout << "Hello, Parth!" << endl;
    // int x=5 , y=11;
    // swap(x,y);
    // cout<<x<<endl<<y;
  int  s= funadd(5,7);
    cout<<s;
    return 0;
}