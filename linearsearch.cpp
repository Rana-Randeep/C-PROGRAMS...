#include<iostream>
using namespace std;
int linearsearch(int arr[],int x,int y);
int main(){
    int n, key;
    cout<<"enter length of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element of which you want to know the position";
    cin>>key;
    cout<<key<<" is at postion "<<linearsearch(arr,key,n);
    return 0;
}
int linearsearch(int arr[],int x,int y){
    for(int i=0;i<y;i++){
       if(arr[i]==x){
        return i;
       }
    }
    return -1;
}
