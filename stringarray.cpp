#include<iostream>
using namespace std;
int main(){
  int l,s;
  char name[10];
  char surname[10];
  cout<<"enter your first name length"<<endl;
  cin>>l;
  //TAKING INPUT
  cout<<"ENTER YOUR FIRST NAME"<<endl;
  for(int i=0;i<l;i++){
  cin>>name[i];
  }
  //PRINTING NAME 
  for (int i=0;i<l;i++){
    cout<<name[i];
  }
  cout<<endl;
  
  cout<<"enter your surname length"<<endl;
  cin>>s;
  cout<<"ENTER YOUR LAST NAME"<<endl;
  for(int i=0;i<s;i++){
    cin>>surname[i];
  }

  for (int i=0;i<s;i++){
    cout<<surname[i]<<endl;
  }
return 0;
}