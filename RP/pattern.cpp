#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	
	
	for(i=0;i<5;i++)
	{
		for(j=1;j<=5-i;j++)
		{

			cout<<j;
                }
                //cout<<endl;
                
                if(i==1)
                {
                	cout<<" ";
                	
		}
		if(i==2)
		{
			cout<<"   ";
                }
                if(i==3)
                {
                	cout<<"     ";
		}
		if(i==4);
		{
			cout<<"       ";
                }
                //cout<<endl;
                
                for(k=5-i;k>0;k--)
                {
                	if(k==5)
                		continue;
                	cout<<k;
                }
                cout<<endl;
                
	}
}
