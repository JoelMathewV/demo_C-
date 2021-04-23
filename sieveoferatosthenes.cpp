#include<iostream>
using namespace std;
//finding all the prime no. from 2 till n;
void sieveoferatosthenes(int a){
    int arr[100]={0};
    for(int i=2;i<a;i++){
        if(arr[i]==0){
            for(int j=i*i;j<a;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<a;i++){
        if(arr[i]==0){
            cout<<i<<' ';
        }
    } 
}
//prime factorisation of a given no.
void primeFactorisation(int n){
    int arr[100]={0};
    for(int i=2;i<=n;i++){
        arr[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(arr[j]==j){
                    arr[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<arr[n]<<' ';
        n=n/arr[n];
    }
}
int main(){
    int n;
    cin>>n;
    primeFactorisation(n);
    cout<<endl;
    return 0;
}