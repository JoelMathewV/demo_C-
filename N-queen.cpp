#include<iostream>
using namespace std;

bool isSafe(int** arr, int col, int row, int n){
    for(int i=0;i<row;i++){
        if(arr[i][col]==1){
            return false;
        }
    }
    int x=row;
    int y=col;
    while(x>=0 && y>=0){
        if(arr[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x=row;
    y=col;
    while(x>=0 && y<n){
        if(arr[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}

bool nqueen(int** arr, int n,  int row){
    if(row >= n){
        return true;
    }
    for(int i=0;i<n;i++){
        if(isSafe(arr,i,row,n)){
            arr[row][i]=1;
            if(nqueen(arr,n,row+1)){
                return true;
            }
            arr[row][i]=0;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    
    if(nqueen(arr,n,0)){
        for (int i = 0; i < n; i++)
        {
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}