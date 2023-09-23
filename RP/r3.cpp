#include<iostream>
 
int main()
{
	int BS,HRA,DA,PF,GS,NetSalary;

	std::cout<<"Enter the basic salary:";
	std::cin>>BS;

	HRA=(15*BS)/100;
	std::cout<<"HRA is:"<<HRA;

	DA=(30*BS)/100;
	std::cout<<"DA is:"<<DA;

	GS=BS+HRA+DA;
	std::cout<<"Gross salary is:"<<GS;

	PF=(12.5*GS);
	std::cout<<"PF is:"<<PF;

	NetSalary=GS-PF;

	std::cout<<"Net salary:"<<NetSalary;

return 0;

}

