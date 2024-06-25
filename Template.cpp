#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{

    int intResult = add(5, 10);
    double doubleResult = add(5.5, 2.3);
    float floatResult = add(3.3f, 4.7f);

    cout << "Addition of two integers: " << intResult << endl;
    cout << "Addition of two doubles: " << doubleResult << endl;
    cout << "Addition of two floats: " << floatResult << endl;

    return 0;
}
