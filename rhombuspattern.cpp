#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i-1;j>=1;j--){
            cout<<" ";
        }
        for(int k=n;k>=1;k--){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}