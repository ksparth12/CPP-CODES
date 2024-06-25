#include<iostream>
 
using namespace std;
 
class cmplx{
    private:
    int a;
    int b;
    friend cmplx sumcmplx(cmplx o1, cmplx o2); 
    public:
    void getNum(int n1,int n2){
        a = n1;
        b = n2; 
    }
    void printNum(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    // void addNum(cmplx n1,cmplx n2){
    //     a = n1.a + n2.a;
    //     b = n1.b + n2.b;
};
    cmplx sumcmplx( cmplx o1,  cmplx o2){
        cmplx o3;
        o3.getNum((o1.a + o2.a), (o1.b + o2.b));
        // o3.a = o1.a + o2.a;
        // o3.b = o1.b + o2.b;
        return o3;
    }
    

int main()
{

 cmplx c1,c2,sum;
 c1.getNum(1,4);
 c1.printNum();

 c2.getNum(2,3);
 c2.printNum();

 sum = sumcmplx(c1,c2);
 sum.printNum();

 
return 0;
}