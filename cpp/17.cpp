#include <iostream>

using namespace std;

int main()
{
   int n=10;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			cout<< j ;

		}
		
		
		for(int s=2;s<2*i-1;s++)
		{
		    cout<<" ";
		}
		
		
		if(i==1)
		{
		    for(int z=n-1;z>=1;z--)
		    {
		        cout<<z;
		    }
		}
		
		if(i>1)
		{
		for(int k=n-i+1;k>0;k--)
		{
		    cout<< k;
		}
		}

		cout<<endl;
	}


    return 0;
}
