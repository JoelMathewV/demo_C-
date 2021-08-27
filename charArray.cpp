#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();
    int len=0,maxlen=0,st=0,maxst=0;

    for(int i=0;i<=n;i++){
        if (arr[i]=='\0' || arr[i]==' '){
            len=0;
        }
        else{
        len++;
        }
        if(len>maxlen){
            maxlen=len;
            maxst=st;
        }
        st=i+1;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<=maxlen;i++){
        cout<<arr[maxst+i];
    }
    return 0;
}