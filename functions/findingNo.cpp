#include<iostream>
using namespace std;
int main(){
    int n;
    int key;
    cin>>n;
    int arr[n];
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            flag=1;
        }

    }
    if(flag==0){
        cout<<"No element found";
    }
    return 0;
}