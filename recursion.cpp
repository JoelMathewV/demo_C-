#include<iostream>
using namespace std;
int sum(int n){  //sum of conecutive natural no.
    int prev;
    if (n==0){
        return 0;
    }
    prev = sum(n-1);
    return n + prev;
}
int pow(int n, int p){  //power of a no. to n
    int prev;
    if(p==0){
        return 1;
    }
    prev = pow(n,p-1);
    return n*prev;
}

int main(){
    cout<<pow(2,5)<<endl;

    return 0;
}