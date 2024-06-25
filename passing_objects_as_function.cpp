#include <iostream>

using namespace std;

class ComplexNumbers
{
private:
    int real;
    int imaginary;

public:
    void setData(int v1, int v2)
    {
        real = v1;
        imaginary = v2;
    }
    void setDataBySum( ComplexNumbers o1, ComplexNumbers o2)
    {
        real = o1.real + o2.real;
        imaginary = o1.imaginary + o2.imaginary;
    }
    void display(void)
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    ComplexNumbers a, b,c;
    a.setData(2, 3);
    a.display();
    b.setData(4, 5);
    b.display();
    c.setDataBySum(a, b);
    c.display();
    
    return 0;
}