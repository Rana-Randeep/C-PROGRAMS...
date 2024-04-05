#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
    }
    cout<<"maximum no. is "<< maxNo<<" and minimum no. is "<< minNo;
    return 0;
}