#include<iostream>
using namespace std;
int main(){
    long long int n ;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime no"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"its a prime no"<<endl;
    }
    return 0;
}