#include<iostream>
using namespace std;
int main(){
    int n;
    int number=0, lastDigit;
    cin>>n;
    while(n>0){
        lastDigit=n%10;
        number=number*10 + lastDigit;
        n=n/10;
    }
    cout<<number<<endl;
    return 0;
}