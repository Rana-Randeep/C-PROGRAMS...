#include<iostream>
#include<string>
using namespace std;
int main(){
    string b;
    cout<<"enter your name"<<endl;
    getline(cin,b); // used to print string with space
    cout<<b<<endl;

string c;
string d;
c="fam";
d="ily";
cout<<c+d<<endl;


string e=d.append(c);
cout<<e<<endl;

d.append(c);
cout<<d<<endl;

c=c+d;
cout<<c<<endl;
    return 0;
}