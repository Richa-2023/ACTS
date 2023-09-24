#include<iostream>
using namespace std;
int main()
{
int i,j,x[3][3],y[3][3];
std::cout<<"Enter the element in an array:"<<endl;

for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		std::cin>>x[i][j];
	}
}
std::cout<<"Display Array Element:"<<endl;
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		std::cout<<x[i][j];
	}
	cout<<endl;
}


for(j=0;j<=2;j++)
{
	for(i=0;i<=2;i++)
	{
		y[j][i]=x[i][j];
	}
}
std::cout<<"\nTranspose:";
for(j=0;j<=2;j++)
{
	for(i=0;i<=2;i++)
	{
		std::cout<<y[j][i];
	}
	cout<<endl;
}
}
