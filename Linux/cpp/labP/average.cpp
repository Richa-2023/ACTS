#include<iostream>
int main()
{
	int num,i,j;
	std::cout<<"Enter Student Number: ";
	std::cin>>num;
	
	int arr[num];
	char name[100];
	float m1,m2,m3;
	float avg;
	
	for(i=0;i<num;i++)
	{
		std::cout<<"Enter Name: ";
		std::cin>>name;
		
		std::cout<<"Enter Marks: ";
		std::cin>>m1>>m2>>m3;
	        
	        if((m1>=0 && m1<100) && (m2>=0 && m2<100) && (m3>=0 && m3<100))
	        	
		{
			avg = (m1+m2+m3)/3;
			std::cout<<"\nAverage: "<<avg;
			
			if(avg>90 && avg<=100)
				std::cout<<"\nGrade: A";
			else if(avg>80 && avg<=90)
				std::cout<<"\nGrade: B";
			else if(avg>70 && avg<=80)
				std::cout<<"\nGrade: C";
			else if(avg>60 && avg<=70)
				std::cout<<"\nGrade: D";
			else
				std::cout<<"\nGrade: F";
		}
		else
			std::cout<<"Invalid Input...";
		
	}
	
}
