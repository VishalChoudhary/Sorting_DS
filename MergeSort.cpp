#include<iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub){
	int temp[40];
	int i,j,k;
	i=lb;
	j=mid+1;
	k=0;
	while(i<=mid && j<=ub){
		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}		
		else{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid){
		temp[k++]=a[i++];
	}
	while(j<=ub){
		temp[k++]=a[j++];
	}
	for(i=lb,j=0;i<=ub;i++,j++){
		a[i]=temp[j];
	}
}
void mergesort(int a[],int lb,int ub){
	if(lb<ub){
		int mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int main(){
	int i;
	int a[]={12,87,-7,5,32,45,56};
	int n=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n-1);
	cout<<"\nSorted array is : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";	
	return 0;
}
