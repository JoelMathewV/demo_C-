#include<vector>
#include<iostream>
using namespace std;
vector<vector<int> > ans;
void permute(vector<int> &a, int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[idx],a[i]);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }

    //STL trick
    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while (next_permutation(a.begin(),a.end()));
    
    //permute(a,0);
    for(auto v:ans){
        for(auto i:v){
            cout<<i<<" ";
        }
            cout<<("\n");
    }
    return 0;
}