#include<iostream>
using namespace std;
int main()
{
int i,j,x[3][3],y[3][3],z[3][3];
std::cout<<"Enter the element in an array:"<<endl;

for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		std::cin>>x[i][j];
	}
}
std::cout<<"Display Array Element x[i][j]:"<<endl;
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		std::cout<<x[i][j]<<" ";
	}
	cout<<endl;
}

for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		std::cin>>y[i][j];
	}
}
std::cout<<"Display Array Element y[i][j]:"<<endl;

for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		std::cout<<y[i][j]<<" ";
	}
	cout<<endl;
}

for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		
	}
}
std::cout<<"\nAddition z[i][j]: "<<endl;
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
		std::cout<<z[i][j]<<" ";
	}
	cout<<endl;
}
}
