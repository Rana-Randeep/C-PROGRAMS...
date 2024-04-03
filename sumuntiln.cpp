#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter no. until which you want to print sum"<<endl;
    cin>>n;
    sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}