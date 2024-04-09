#include<iostream>
#include<string>
using namespace std;
int main(){

string a;
    a="beautiful";

cout<<a[0]<<endl;

//cout<<a;
//a.clear();
//cout<<a<<endl;

string b;
b="handsome";
cout<<a.compare(b)<<endl;
if(a.compare(b)==0){
    cout<<"same same"<<endl;
}


cout<<b.empty()<<endl;

b.clear();
if(b.empty()){
    cout<<"it is empty"<<endl;
}
//cout<<b.empty()<<endl;
return 0;
}
