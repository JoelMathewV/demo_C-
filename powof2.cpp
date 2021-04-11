#include<iostream>
using namespace std;
bool powof2(int n){
    return(n && (n & n-1)==0);
}
int main(){
    cout<<powof2(4)<<endl;
    return 0;
}