#include<bits/stdc++.h>
using namespace std;


int findMax(int arr[], int n)
{
	int max=INT_MIN;
	int second_max=arr[0];

	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			
			second_max=max;
			max=arr[i];
			
		}
		else
		{       if(arr[i]>second_max)
			     second_max=arr[i];
		}

		
		

	}

	return second_max;
}



int main()
{
	#ifndef ABHI
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,max;
	cin >> n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	max= findMax(arr,n);
	cout << "second maximum of array : " << max;


}
