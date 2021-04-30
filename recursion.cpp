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

int factorial(int n){
    int prev;
    if(n==0){
        return 1;
    }
    prev = factorial(n-1);
    return n*prev;
}

int fibbo(int n){
    if (n==0 || n==1){
        return n;
    }
    return fibbo(n-1)+fibbo(n-2);
}
//to check if an array is sorted or not
bool sort(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restArr = sort(arr+1, n-1);
    return (arr[0]<arr[1] && restArr);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    cout<<sort(arr, n)<<endl;
    return 0;
}