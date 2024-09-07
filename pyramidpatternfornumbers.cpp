#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}