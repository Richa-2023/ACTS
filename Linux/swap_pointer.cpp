#include<iostream>

void swap (int* a,int* b);
int main()
{
	int a,b;
	std::cout<<"Enter Numbers: ";
	std::cin>>a>>b;
	
	swap(&a,&b);
	
	std::cout<<"After Swap:"<<a<<" "<<b;
	return 0;

}
void swap(int* a,int* b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
