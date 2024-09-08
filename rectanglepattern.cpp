#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"enter length"<<endl;
    cin>>length;
    cout<<"enter breadth"<<endl;
    cin>>breadth;
    for(int i=0;i<length;i++){
        for(int j=0;j<breadth;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}