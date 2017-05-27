#include<iostream>
using namespace std;
void heapify(int a[],int i, int n)
{
	int largest =i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&aa[left]>a[largest])
	largest=left;
	if(right<n && a[right] > a[largest])
	largest=right;
	if(largest!=i)
	{
		swap(a[largest],a[i]);
		heapify(a,largest,n);
	}
	
}
void build_heap(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	heapify(a,i,n);
}
void heapsort(int a[],int)
{	build_heap(a,n);
	for(int i=n-1; i>=0;i--)
	{	swap(a[0,a[i]]);
		heapify(a,0,i);

	}
}
int main(){
	int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
}
