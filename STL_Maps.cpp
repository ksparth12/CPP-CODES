#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    cout << "Hello, Parth!" << endl;

    map<string, int> MyMap;     //Map is an associative array.
    MyMap["Parth"] = 100;
    MyMap["Harry"] = 98;
    MyMap["Rohan"] = 1;

    map<string, int>::iterator iter = MyMap.begin();
    for (iter = MyMap.begin(); iter != MyMap.end(); iter++)

    {
        // cout << iter->first << " " << iter->second << endl;
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    return 0;
}

//(*iter).first is as equal as iter -> first...