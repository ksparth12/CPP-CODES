#include <iostream>
#include <fstream>
#include<vector>
using namespace std;

void display (vector<int> & v){         // &v is used to get reference of v .//vector<int> is just like a datatype
    for (int i = 0; i < v.size(); i++)  //v.size() is for to get size
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    
}

int main() {

    vector<int> vec1;
    int element, size ;
    cout << "Enter the size of the vector: ";
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements of the vector: ";
        cin >> element;
        vec1.push_back(element);    //IMPORTANT -> To store the values .
    }
    // vec1.pop_back();

    display(vec1);
    vector<int> :: iterator iter = vec1.begin();// An iterator is used to iterate at first position in vector.
    // vec1.insert(iter ,5, 10);
    //You can use many functions like this using vector in cpp...
    display(vec1);
    return 0;
}