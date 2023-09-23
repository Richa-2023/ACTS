#include<iostream>
#include<algorithm>
using namespace std;
class Array
{
	int size;
	int *arr;

public:

	Array();
	Array(int size);
	Array(Array &a);
	void Accept();
	void Display();
	~Array();
	void Update();

};


		Array:: Array()
		{
			this->size=5;
			arr= new int[size];
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
        }
			Array::Array(int size)
			{
				this->size=size;
				arr=new int[size];
				for(int i=0;i<size;i++)
			 {
				this->arr[i]=arr[i];
			 }
			}

			Array::Array(Array &a)
			{
               this->size=a.size;
               arr=new int[size];
               for(int i=0;i<size;i++)
               this->arr[i]=a.arr[i];

			}

			void Array::Accept()
			{   cout<<"Enter elements of array"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>arr[i];
				}
			}

			void Array::Display()
			{
				for(int i=0;i<size;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}

			Array::~Array()
			{
				delete []arr;
			}

            void Array::Update()
            {
            	cout<<"Enter new element "<<endl;
            	cin>>arr[0];
            }
int main()
{   

	Array a1(7);
	a1.Accept();
	Array a2(a1);
	a1.Update();
	a1.Display();
	a2.Display();
	return 0;
}