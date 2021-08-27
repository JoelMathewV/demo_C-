#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}