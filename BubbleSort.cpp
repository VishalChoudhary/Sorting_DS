#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    int i,j;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a[] = {5, 3, 13, 2, 11, 4, 7};
    int n=sizeof(a)/sizeof(a[0]);
    bubbleSort(a,n);
    cout<<"Bubble Sort:  ";
    print(a,n);
}