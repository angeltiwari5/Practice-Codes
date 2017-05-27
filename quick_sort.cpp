#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}*/
int partition(int v[], int l, int r )
{
	int pivot=v[r];
	int i=l-1;
	for(int j=l;j<=r-1;j++)
	{
		if(v[j]<=pivot)
		{
			i++;
			swap(v[j],v[i]);
		}
	}
	swap(v[i+1],v[r]);
	return i+1;
	
}
void quicksort(int a[], int l, int r)
{
	if(l<r){
	int q=partition(a,l,r);
	
		quicksort(a,l,q-1);
	
		quicksort(a,q+1,r);
	}
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int n1 = sizeof(a)/sizeof(a[0]);
		quicksort(a,0,n1-1);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<endl ;
		}
	return 0;
}