#include <iostream>
bool search(int a[],int n,int ele);
int main()
{
	int n,ele;
	std::cout<<"Enter Size: ";
	std::cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	std::cout<<"Enter Element Want To Search: ";
	std::cin>>ele;
	if(search(a,n,ele) == 0)
	{
		std::cout<<"Match Not Found";
        }
        else 
        	std::cout<<"Match Found";
	
}

bool search(int a[],int n,int ele)
{
	for(int i=0;i<n;i++)
	{
		if(ele == a[i])
			return true;
	}
	return false;
}
