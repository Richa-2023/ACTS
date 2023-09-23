#include<iostream>

int findMax(int num[],int n);
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size: ";
	cin>>n;
	int num[n];
        int Smax=findMax(num,n);
        cout<<"Second maximum:"<<Smax;
        return 0;
}
int findMax(int num[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
        }
        int max=num[0];
        for(i=1;i<n;i++)
        {
        	if(max < num[i])
        		max = num[i];
        		
        }
        int Smax=num[0];
        i=0;
        while(i<n)
        {
        	
        	if(Smax < num[i])
        	{
        		if(Smax != max)
        		{
				Smax=num[i];
                        }
                }
                i++;
        }
        return Smax;
        
}
