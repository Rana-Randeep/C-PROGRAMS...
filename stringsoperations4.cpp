#include<iostream>
using namespace std;
int main(){
  string s;
  s="nincompoo";
  // erase function
string b;
b=s.erase(0,6);
cout<<b<<endl;
cout<<s<<endl;

// find function
s="nincompoop";
int f=s.find("poop");
cout<<s.find("com")<<endl;
cout<<f<<endl;
//insert function
s.insert(9,"refer");
cout<<s<<endl;
return 0;
}
