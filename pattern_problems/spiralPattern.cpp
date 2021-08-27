#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k=1, st_col=0, end_col=n-1, st_row=0, end_row=n-1;
    int matrix[n][n];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            matrix[i][j]=0;
        }
    }
    while(st_col<=end_col && st_row<=end_row){
        for(int i=st_col;i<= end_col;i++){
            matrix[st_row][i]=k;
            k++;   
        }
        st_row++;
        for(int j=st_row;j<=end_row;j++){
            matrix[j][end_col]=k;
            k++;
        }
        end_col--;
        for(int i=end_col; i>=st_col; i--){
            matrix[end_row][i]=k;
            k++;
        }
        end_row--;
        for(int i=end_row;i>=st_row;i--){
            matrix[i][st_col]=k;
            k++;
        }
        st_col++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}