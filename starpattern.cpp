#include<iostream>
using namespace std;
int main(){
    int j, n;
    cout<<"enter number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int j=i-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}