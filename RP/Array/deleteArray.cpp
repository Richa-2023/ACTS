#include<iostream>
using namespace std;
void dArray(int x[],int n);
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
		cout<<x[i];
	}
	
	dArray(x,n);
	
}
void dArray(int x[],int n)
{
	int i,pos;
	cout<<"Enter Position:";
	cin>>pos;
	if(pos < 0)
	{
		cout<<"invalid input";
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(pos==i)
			{
				x[i]=-1;
			}
		}
	}
	cout<<"Updated Array Elements:";
	for(i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}
	
	
}




/*


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

*/
