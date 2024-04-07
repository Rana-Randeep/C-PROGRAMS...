#include<iostream>
using namespace std;
int main(){
    int arr[3]={10,20,30};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    int *ptr;
    ptr=arr;
    cout<<ptr<<endl;
    /*for(int i=0;i<3;i++){
        cout<<*ptr<<endl; // array itself act as a pointer but to print the elemets store in array,we have to make another pointer which stores array's addrdess and then we can excess its elments using that another pointer
        ptr++;
    }*/
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        // arr++; this is illegal
    }
    return 0;
}