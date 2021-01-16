#include<iostream>
using namespace std;
int selectionSort(int a[],int n,int i){
	int min,j;
	min=i;
	for(j=i+1;j<n;j++){
		if(a[min]>a[j]){
			min=j;
		}
	}
	return min;
}
int main(){
	int a[]={10, 9, 7, 101, 23, 44, 12, 78, 34, 2};
	int n=sizeof(a)/sizeof(a[0]);
	int i,temp;
	for(i=0;i<n-1;i++){
		int pos=selectionSort(a,n,i);
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	cout<<"Selection Sort";
	for(i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
	return 0;
}
