#include<iostream>
using namespace std;
void reverse(int arr[],int l,int k)
{	int  temp;
	while(l<=k)
	{
	temp=arr[l];
		arr[l]=arr[k];
		arr[k]=temp;
		l++;
		k--;
	}

}
void rotate_method2(int arr[],int k,int n)
{
	if(k==0||n<0)
		cout<<"invalid";
	
	reverse(arr,0,n-1);
	reverse(arr,n,k-1);
	reverse(arr,0,k-1);
	for(int i= 0;i<k;i++)
	{
		cout<<arr[i];
	}

}

void rotate_method1(int arr[], int k, int n )
{
	//int l= arr.size();
	int temp[k];
	if(n>k)
	{
	n=n%k;
	}
	for(int i=0;i<n;i++)
	{
	temp[i]=arr[k-n+i];
	}
	int j=0;
	for(int i=n;i<k;i++)
	{
		temp[i]=arr[j];
		j++;
	//cout<<temp[i];
	}
	for(int i=0;i<k;i++)
	{
		cout<<temp[i];
	}
	return;
}
int main()
{
	int n;
	int k;
	cin>>n;
	int arr[n];
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//rotate_method1(arr,n,k);
	rotate_method2(arr,n,k);
	return 0;
}