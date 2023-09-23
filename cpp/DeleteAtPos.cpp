#include<iostream>
using namespace std;

int main()
{
	int n,pos;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}

	cout<<" Enter position u want to delete";
	cin>>pos;

	for(int i=pos-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}

	arr[n-1]='\0';

	for(int p=0;p<n-1;p++)
	{
		cout<<arr[p]<<" ";
	}

}