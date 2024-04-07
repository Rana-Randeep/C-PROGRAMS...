
#include<iostream>
using namespace std;
void increment(int a){
    a++;
}
int main(){
int a=2;
increment(a);
cout<<a<<endl;
return 0;    
}

// can we increase the value permanent using pointer or you can say that can we increase the value by using call by reference method