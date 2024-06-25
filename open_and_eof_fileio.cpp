#include <iostream>
#include <fstream>
using namespace std;


int main() {

    string st1;
    string st2;

    // ofstream writee("FileA.txt");               /* If this block gets executed with below block , all lines of FileA will be overwitten by only "Hello my name is Parth Sharma ". */
    // st1 = "Hello my name is Parth Sharma ";
    // writee<< st1;
    // writee.close();

    ifstream readd("FileA.txt");
    // readd>>st2;
    while ( readd.eof() == 0){      //eof means end of file
    getline(readd,st2);
    cout<<st2<<endl;
    }
    readd.close();

    return 0;
}