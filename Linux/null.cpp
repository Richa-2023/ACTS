#include<iostream>
int main ()
{
	int *temp;
	//Wild Pointer
	//std::cout<<"&temp : "<<&temp;
	std::cout<<"*temp : "<<*temp;

	//Null Pointer
	int *temp2=nullptr;
	
	std::cout<<"\n";
	std::cout<<"&temp2 : "<<&temp2;
	std::cout<<"*temp2 : "<<*temp2;
}
