#include<iostream>
using namespace std;
void swap(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main (){
    int a=2;
    int b=4;
    int *c;
    int *d;
    //c=&a;
    //d=&b;
    swap(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}