#include<iostream>
void multiply(int x[],int y[]);
int main()
{
int x[5],y[5],i;

std::cout<<"Enter the value in an array;";
	for(i=0;i<5;i++)
	{
	std::cin>>x[i];
	}
        std::cout<<"Array Elements Before Multiply: ";
	for(i=0;i<5;i++)
	{
		std::cout<<x[i]<<" ";
	}

	multiply(x,y);
	return 0;

}
void multiply(int x[],int y[])
{
	int i;
	for(i=0;i<5;i++)
	{
		y[i]=x[i]*5;
		
        }
        std::cout<<"Array Elements After Multiply: ";
        for(i=0;i<5;i++)
	{
		std::cout<<y[i]<<" ";
		
        }
        
}
