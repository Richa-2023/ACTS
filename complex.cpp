#include<iostream>
using namespace std;
class Complex{
	float real,imag;
	
	public:
	Complex(){
		real=0;
		imag=0;
	}
	Complex(float real,float imag)
	{
		this->real=real;
		this->imag=imag;
	}
	void set(float r)
	{
		real=r;
		
	}
	float get()
	{
		return real;
		
	}
	void setImag(float i)
	{
		imag=i;
		
	}
	float getImag()
	{
		return imag;
		
	}
	void Accept()
	{
		cout<<"Enter Real and Imaginary Value: ";
		cin>>real>>imag;
	}
	void Display()
	{
		cout<<"Real: "<<real<<endl;
		cout<<"Imaginary: "<<imag<<endl;
		cout<<real<<"+i"<<imag<<endl;
	}
};

int main()
{
	Complex c1;
	cout<<"Object c1: "<<endl;
	c1.Display();
	
	Complex c2(5.6,1.3);
	cout<<"Object c2: "<<endl;
	c2.Display();
	
	Complex c3;
	cout<<"Object c3: "<<endl;
	c3.Accept();
	c3.Display();
	
	
	Complex c4;
	c4.set(1.2);
	//c4.get();
	c4.Display();
	
	
}
