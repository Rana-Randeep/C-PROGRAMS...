#include<iostream>
using namespace std;
int main(){
    int n;
    n=10;
    int *ptr;
    ptr=&n;
    cout<<n<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    int **k;
    k=&ptr;
    cout<<k<<endl;
    cout<<*k<<endl;
    cout<<**k<<endl;

    return 0;
}