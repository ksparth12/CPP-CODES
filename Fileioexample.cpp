#include <iostream>
#include <fstream>
using namespace std;


int main() {
    
    string s1 = " This is my writing file which I using for ofstreram " ;
    string s2;

    ofstream write("Fileioexample.txt");
    // write.open("Fileioexample") another method to open file by shorting above line.
    write << s1;            // write is a object , which here you use it like cout ... but for another file
    write.close();

    ifstream read("Fileioexample.txt");    //read is an object , here used like cin for another file.
    // read >> s2;
    getline(read, s2);      // use getline always getline(obj,string name) string name will be your variabe which you will used like a container to value into it so later on you use it by cout.
    cout << s2 << endl;
    read.close();

    return 0;
}

/* ofstream is for write into the file always use its objects like cout
wherease ifstream is for reading the data of the file use it as cin
cout<<
cin>> 
ofstream -> cout 
ifstream -> cin
in getline(a,b) -> a is object which will be associated by istream object and b will be the variable where you have to store the information of another file
later on you can see that information by using cout<<b; */