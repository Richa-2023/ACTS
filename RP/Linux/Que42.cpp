#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
   int emp_id;
   char emp_name[20];
   double salary;

public:
	Employee();
	Employee(int,char*,double);
	void Accept();
	void Display();
	void Update();
	int getId();
};

Employee::Employee(){

}

// Employee::Employee(int id,char * name,double s){

// 	this->emp_id=id;
// 	strcpy(emp_name,name);
// 	this->salary=s;
// }

void Employee::Accept(){
	cout<<"Enter name,id and salary"<<endl;
	cin>>emp_name>>emp_id>>salary;
}

void Employee::Display(){
	cout<<emp_name<<" "<<emp_id<< " "<<salary<<endl;
}

void Employee::Update()
{
	cout<<"Enter name and salary"<<endl;
	cin>>emp_name>>salary;
}
int Employee::getId()
{
	return emp_id;
}
int main()
{
	Employee e[10];
	int choice,count=0,i,id;
	while(true)
	{
		cout<<"1. Insert Record:"<<endl;
		cout<<"2. Update Record(based on id)"<<endl;
		cout<<"3. Display all records"<<endl;
		cout<<"4. Exit"<<endl;
		cin>>choice;

		switch(choice)
		{
		case 1:
			e[count++].Accept();
			break;

		case 2:
			cout<<"Enter the id you want to be updated"<<endl;
			cin>>id;
			for(int i=0;i<count;i++)
			{
				if(id==e[i].getId())
				{
					e[i].Update();
				}
			}
		case 3:
			for(int i=0;i<count;i++)
			{
			e[i].Display();
		    }
		    break;
		case 4: exit(0);

		}
	}



	return 0;
}