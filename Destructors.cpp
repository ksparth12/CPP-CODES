#include <iostream>
using namespace std;

static int count;

class num {
public:
    num(){
        count++;
        cout<<"The constructor number "<<count<<" is called . "<<endl;
    }
    ~num(){
        count--;
        cout<<"The destructor number "<<count<<" is called . "<<endl;
    }
};

int main() {
    cout<<"We are inside main fucntion "<<endl;
    cout<<"Now we will call our constructors "<<endl;
    num n1;
    {
        cout<<"Entered in num1 block"<<endl;
        cout<<"Now we will call other functions"<<endl;
        num n2,n3;
        cout<<"Exited from num1 block"<<endl;
    }
    cout<<"We are exiting from main function "<<endl;
    return 0;
}