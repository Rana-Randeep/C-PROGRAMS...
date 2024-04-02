#include<iostream> 
using namespace std;
int main(){
    int n,r,res;
    cout<<"enter n and r for combination";
    cin>>n>>r;
    res=1;
    for(int i=0;i<r;i++){
     res=res*(n-i);
     res=res/(i+1);
    }
    cout<<res;
    return 0;
}