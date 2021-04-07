#include <iostream>
using namespace std;
int getBit(int n, int poss){
    return ((n & (1<<poss))!=0);
}
int setBit(int n, int poss){
    return(n|(1<<poss));
}
int clearBit(int n, int poss){
    int mask= ~(1<<poss);
    return (n & mask);
}
int main(){
    cout<<clearBit(5,2)<<endl;
    return 0;
}