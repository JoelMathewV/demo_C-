#include<iostream>
using namespace std;
bool powof2(int n){
    return(n && (n & n-1)==0);
}
int noofones(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}
int unique(int ar[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^ar[i];
    }
    return xorsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<unique(arr,7)<<endl;
    return 0;
}