#include<iostream>
using namespace std;
void merge(int arr[], int l, int r, int mid){
    int N1 = mid-l+1, N2 = r-mid;
    int a[N1], b[N2];
    for(int i=0;i<N1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<N2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<N1 && j<N2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++, i++;
        }
        else{
            arr[k]=b[j];
            k++, j++;
        }
    }
    while(i<N1){
        arr[k]=a[i];
        k++, i++;
    }
    while(j<N2){
        arr[k]=b[j];
        k++, j++;
    }

}
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, r, mid);
    }
}
int main(){
    int a[5]={7,4,5,6,3};
    mergeSort(a, 0, 4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}