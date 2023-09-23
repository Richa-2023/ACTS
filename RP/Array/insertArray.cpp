#include<iostream>
using namespace std;
void iArray(int a[],int n);
int main()
{
	int n;
	cout<<"Enter Size:";
	cin>>n;
	
	int x[n],pos;
	cout<<"Enter Array Elements:";
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	cout<<"Array Elements:";
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
	
	iArray(x,n);
	

}
void iArray(int a[],int n)
{
	int i=0,pos,num;
	cout<<"Enter Position:";
	cin>>pos;
	cout<<"Enter Element to Insert:"<<endl;
	cin>>num;
	int result[n+1];
	
	for(i=0;i<pos;i++)
	{
		result[i]=a[i];
		
	} 
	result[pos]=num;
	
	for(i=pos+1;i<n;i++)
	{
		result[pos+1]=a[i-1];
		
	}
	
	for(i=0;i<n+1;i++)
	{
		cout<<result[i]<<endl;
	}
	
}
