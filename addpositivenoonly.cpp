#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    cout<<"enter only positive numbers for addition"<<endl;
    cin>>n;
    while(n>0){
        sum=sum+n;
        cin>>n;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}
// write a  program to take five positive numbers and add them