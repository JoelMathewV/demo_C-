#include<iostream>
#include<climits>
using namespace std;
int main(){
    //Kadense algo
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum<<endl;
    return 0;
}