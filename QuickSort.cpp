#include<iostream>
using namespace std;
void quicksort(int a[],int first,int last){
	int i,j,pivot,temp;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(a[i]<=a[pivot]&&i<last)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}
}
int main(){
	int i,n;
	int a[]={10, 7, 8, 9, 1, 5};
	n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n-1);
	cout<<"Quick Sorted Array: ";
	for(i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}
