#include<iostream>
using namespace std;
int main(){
    int z;
    z=12;
    int *a;
    a=&z;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
    return 0;
}