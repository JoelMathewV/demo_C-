#include<iostream>
using namespace std;
int swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<' '<<b<<endl;
    return 0;
}
int main(){
    int a=2;
    int b=4;
    cout<<a<<' '<<b<<endl;
    swap(a,b);
    return 0;
}