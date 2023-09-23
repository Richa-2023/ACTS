#include<bits/stdc++.h>
using namespace std;


class BigInt{

	private:
		int num;
		string str;


	public:
		BigInt(int n, string str)
		{	
			this->num=n;
			this->str=str;
			
		}
		
		

		bool operator ==(BigInt obj2)
		{
			if(this->str==obj2.str)
				return true;
			else    
				return false;
		}

		
};


int main()
{

	BigInt o1(5,"ABC");
	BigInt o2(6,"ABC");
	

	bool result= o1.operator == (o2);

		cout<<result;

}
