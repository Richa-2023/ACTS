#include<iostream>
using namespace std;
void areaCircum(int r,float *ar,float *cir);
void areaRect(int l,int b,float *ar,float *peri);
int main()
{
	int num;
	cout<<"1.Circle"<<endl;
	cout<<"2.Rectangle"<<endl;
	
	
	char ch;
	do{
	cout<<"Enter Choice: ";
	cin>>num;
		switch(num)
		{
			case 1:
				int r;
				float ar,circum;
				cout<<"Enter Radius:"<<endl;
				cin>>r;
				areaCircum(r,&ar,&circum);
				cout<<"\nArea:"<<ar;
				cout<<"\nCircumference:"<<circum;
				break;
			case 2:
				int l,b;
				float area,peri;
				cout<<"Enter Length and Breadth:"<<endl;
				cin>>l>>b;
				areaRect(l,b,&area,&peri);
				cout<<"\nArea:"<<area;
				cout<<"\nPerimeter:"<<peri;
				break;
			default:
				cout<<"Invalid Input";
				break;
				
				
		}
		cout<<"\nDo you want to continue: (Y/N)";
		cin>>ch;
		
	}while(ch=='Y');
	
return 0;
}

void areaCircum(int r,float *ar,float *cir)
{
	*ar=3.14*r*r;
	*cir=3.14*2*r;
}
void areaRect(int l,int b,float *ar,float *peri)
{
	*ar=l*b;
	*peri=2*(l+b);
}
