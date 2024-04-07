/*#include<iostream>
using namespace std;
int main(){

    int *b,n;
    n=10;
    b=&n;
    cout<<n<<endl;
    cout<<b<<endl;
    cout<<&n<<endl;
    cout<<*b<<endl; //dereferencing of pointer
    return 0;
} */

 #include<iostream>
using namespace std;
int main(){
    int *b,n;
    n=10;
    b=&n;
    cout<<*b<<endl;
    *b=20;
    cout<<*b<<endl;
    return 0;
    }
