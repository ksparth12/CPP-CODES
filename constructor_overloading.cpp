#include <iostream>
using namespace std;

class Point {
private:
    int x,y,z;
public:
    Point(int a, int b){
        x=a;
        y=b;
    } //Add methods here

    Point(int a){
        x=a;
        y=0;
    }
    void displayPoint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

int main() {
    cout << "Hello, Parth!" << endl;
    Point p1(2,3);
    p1.displayPoint();
    Point p2(4,5);
    p2.displayPoint();
    Point p3(5);
    p3.displayPoint();
    return 0;
}       