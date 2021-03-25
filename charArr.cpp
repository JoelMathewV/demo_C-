#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int len=0,maxlen=0;
    for(int i=0;i<n;i++){
        maxlen=max(len,maxlen);
        if(arr[i]==' ' || arr[i]=='\0'){
            len=0;
        }
        else{
            len++;
        }
        
    }
    cout<<maxlen<<endl;
    return 0;
}