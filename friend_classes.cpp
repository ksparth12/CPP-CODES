#include<iostream>
 
using namespace std;

class complex{
    int a,b;
    friend class calculator;
    public:
    void getnum(int n1,int n2){
        a = n1;
        b = n2;
    }
    void printNum(){
        cout<<"Your num is "<<a<<"+"<<b<<"i"<<endl;
    }
};
 
class calculator{
    public:

    int sumRealComplex(complex o1,complex o2){
        return (o1.a + o2.a);
    }
    int sumImaginaryComplex(complex o1,complex o2){
        return (o1.b + o2.b);
    }
};

int main()
{
 
complex o1,o2;
o1.getnum(1,1);
 
o2.getnum(2,2);
 
calculator calc;

int res  = calc.sumRealComplex(o1,o2);
cout << "The sum of real part of o1 and o2 is " << res << endl;
int resc  = calc.sumImaginaryComplex(o1,o2);
cout << "The sum of Imaginary part of o1 and o2 is " << resc << endl;

 
return 0;
}