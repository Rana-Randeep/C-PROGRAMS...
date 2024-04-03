#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    cout<<"enter positive numbers for addition"<<endl;
    cin>>n;
    int i=0;
    while (i<=5){
    while(n>0){
        sum=sum+n;
        cin>>n;
    }
    i++;
    }
    cout<<"sum of only positive numbers are "<<sum<<endl;
    return 0;
}