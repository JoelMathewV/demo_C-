#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    int ans=2;
    int curr=2;
    for(j=2;j<n;j++){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}