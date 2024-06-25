/*Three types of basic control structures
1)Sequence structure
2)Selection structure
3)Loop structure
*/

#include<iostream>
 
using namespace std;
 
int main()
{
  int age;
  cout<<"Enter your age: ";
  cin>>age;
  if(age<18){
    cout<<"You can not come to the party ";
    }
    else if(age>=80){
        cout<<"You are too old for the party ";
    }
    else{
    cout<<"You can come to the party ";
  }
 
 
return 0;
}