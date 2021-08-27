//https://leetcode.com/problems/first-bad-version/

#include <iostream>
using namespace std;
bool isBadVersion(int n){
    if(n>=2){
        return true;
    }
    return false;
}
int firstBadVersion(long int n) {
        int a = 1;
		long int mid;
        while(a<=n){
            mid = (a+n)/2;
            if(isBadVersion(mid)==1 && isBadVersion(mid-1)==0 ){
                    cout<< mid;
            }
            if(isBadVersion(mid)){
                n=mid-1;
            }
            else{
                a=mid+1;
            }
        }
		return 0;
    }

int main()
{
    int n = 5;
    firstBadVersion(n);
    return 0;
}