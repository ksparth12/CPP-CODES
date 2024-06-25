#include <iostream>
using namespace std;

class Point {
private:
    int x,y;
public:
    Point(int a, int b){
        x=a;
        y=b;
    } //Add methods here
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
    return 0;
}       