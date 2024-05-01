// pascal triangle using formula of combination
#include<iostream>
using namespace std;
int NCR(int x, int y);
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
       for(int k=i;k<=n-1;k++){
        cout<<" ";
       }
    for(int j=0;j<=i;j++){
        cout<<NCR(i,j);
        cout<<" ";
    }
    cout<<endl;
}
return 0;
}
int NCR(int x,int y){
    int res=1;
    for(int i=0;i<y;i++){
        res=res*(x-i);
        res=res/(i+1);
    }
    return res;
}