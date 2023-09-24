#include<iostream>
int fibonacci(int i);
int main()
{
	int i,n,n1,n2,n3;
	std::cout<<"enter the no. of term";
	std::cin>>n;
	
	fibonacci(n);
	return 0;

}
int fibonacci(int n)
{
		int i=0,n1=0,n2=1,n3;
		std::cout<<"print first and second no."<<n1<<" "<<n2;
		
		for(i=2;i<=n;i++)
		{
			n3=n1+n2;
			std::cout<<n3;

			n1=n2;
			n2=n3;
		}
	return 0;
}
