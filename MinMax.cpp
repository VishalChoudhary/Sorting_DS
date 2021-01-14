#include<iostream>
using namespace std;
void MinMax(int a[],int i,int j, int& max,int& min)
{
	if(i==j){
		max=min=a[i];
	}
	else if(i==j-1){
		if(a[i]<a[j]){
		max=a[j];
		min=a[i];
	   }
	else
	max=a[i];
	min=a[j];
	}
	else{
		int mid,min1,max1;
		mid=(i+j)/2;
		MinMax(a,i,mid,max,min);
		MinMax(a,mid+1,j,max1,min1);
		if(max<max1)
		max=max1;
		if(min>min1)
		min=min1;
	}
	
}
int main()
{
	int a[]={22,18,-5,-8,15,60,30,31,47};
	int n=sizeof(a)/sizeof(a[0]);
	int max = INT_MAX, min = INT_MIN;
	MinMax(a,0,n-1,max,min);
	cout<<"Max= "<<max;
	cout<<"\nMin= "<<min;
	return 0;
}
