#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;


int main() {
    cout << "Hello, Parth!" << endl;
    int arr[]={32,334,244,17,52,572};
    sort(arr, arr+6);                //by default , ascending order
    // sort(arr,arr+6, greater<int>());    //for descending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}