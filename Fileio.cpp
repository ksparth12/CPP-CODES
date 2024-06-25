#include <iostream>
#include <fstream>

using namespace std;


int main() {
    string st = "Hello Parth";
    string st2;
    ofstream out("File1.txt");      //To create/open the file and write into it.
    out<<st;
    out.close(); //Close
    ifstream in("File1.txt");       //To open the file and read it.
    // in>>st2;                     //if i use this with getline , first word will be missed or you can say will not be printed.
    getline(in, st2);
    cout<<st2;
    return 0;
}

//  ofstream means open/create and write
//  ifstream means to open and read it.