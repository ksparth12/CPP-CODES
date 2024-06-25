#include <iostream>
using namespace std;

class BankDeposit {
public:
    int Princpal;
    int years;
    float interestRate ;
    float returnValue;
    BankDeposit() {}
    BankDeposit(int p,int y , int r);
    BankDeposit(int p,int y, float r);
    void show();
};

BankDeposit::BankDeposit(int p,int y, int r){
        Princpal = p;
        years = y;
        interestRate = r;
        returnValue = Princpal;

}

BankDeposit::BankDeposit(int p,int y, float r){
        Princpal = p;
        years = y;
        interestRate = float(r)/100;;
        returnValue = Princpal;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1+ interestRate);
        }
}

void BankDeposit:: show(){
    cout<<endl<<"Principal amount was "<<Princpal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}

int main() {
    BankDeposit bd1,bd2,bd3;
    int R,p,y;
    float r;
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}