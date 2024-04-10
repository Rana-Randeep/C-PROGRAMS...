#include<iostream>
#include<string>
using namespace std;
int main(){
    // three methods to declare string
// 1
    string a;
    cout<<"enter your name"<<endl;
    cin>>a;
    cout<<a<<endl;
//2)
string h;
 
   string d(5,'P');
   h=d;
     cout<<d<<endl;
     cout<<h<<endl;
//3)
     string c="RANA";
     cout<<c<<endl;

    
return 0;
}