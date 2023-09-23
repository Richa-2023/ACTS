#include<iostream>
using namespace std;

class complex
{
	int real;
	
	char op;
	int imaginary;.0.

	

    public:


    	complex()
    	{
          this->real=0;
          this->op='+';
          this->imaginary=0;
    	}
    	complex(int r,char op,int i)
    	{
    		this->real=r;
    		
    		this->op=op;
    		
    		this->imaginary=i;
    	}

    	void Get_Num()
    	{
    		cout<<"Enter real part"<<endl;
    		cout<<"Enter operator"<<endl;
    		cout<<"Enter imaginary"<<endl;
    		cin>>real>>op>>imaginary;
    	}


    	void Display()
    	{
    		cout<<real<<" "<<op<<" "<<imaginary<<"i"<<endl;
 
    	}


};

int main()
{    
	complex c1;
	c1.Get_Num();
	c1.Display();
	complex c2(3,'+',6);
	c2.Display();
	complex c3;
	c3.Display();
	

	return 0;
}