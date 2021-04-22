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
int main(){
    int n;
    cin>>n;
    sieveoferatosthenes(n);
    cout<<endl;
    return 0;
}