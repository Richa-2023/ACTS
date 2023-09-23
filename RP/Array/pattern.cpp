#include<iostream>
using namespace std;

/*
int main()
{
	int i,j,k;
	int row=5;
	
	for(i=5;i>=1;i--)
	{
	        for(k=0;k<=(5-i);k++)
                {
                	cout<<" ";
                }
		for(j=1;j<=i;j++)
		{
			cout<<j;
                }
                
            
                cout<<endl;
	}
}

 12345
  1234
   123
    12
     1
*/
int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
	        for(k=0;k<=(i-1);k++)
                {
                	cout<<" ";
                }
	       
		for(j=i;j<=5;j++)
		{
			cout<<"*";
                }
                
            
                cout<<endl;
	}
}



/*12345
  2345
   345
    45
     5
*/
