#include<iostream>

int findMax(int num[],int n);
int findMin(int num[],int n);
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size: ";
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
        }
        int max=findMax(num,n);
        int min=findMin(num,n);
        cout<<"Max: "<<max;
        cout<<"Min: "<<min;
        return 0;
}
int findMax(int num[],int n)
{
	int i;
        int max=num[0];
        for(i=1;i<n;i++)
        {
        	if(max < num[i])
        		max = num[i];
        }
        return max;
}
int findMin(int num[],int n)
{
	int i;
        int min=num[0];
        for(i=1;i<n;i++)
        {
        	if(min > num[i])
        		min = num[i];
        }
        return min;
}
