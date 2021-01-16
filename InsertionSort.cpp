#include<iostream>
using namespace std;
void insertionSort(int a[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main(){
	int a[] = { 12, 11, 13, 5, 6 };  
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a,n);
    cout<<"Insertion Sort";
    for(int i=0;i<n;i++){
    	cout<<"\t"<<a[i];
	}
}
