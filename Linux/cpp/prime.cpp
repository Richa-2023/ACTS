#include<iostream>
int main()
{
	int n,m,i=2,;
	std::cout<<"Enter n and m: ";
	std::cin>>n>>m;
	
	while(n<=m)
	{
		while(i<=n/2)
		{
			if(n%i==0)
			{
				count++;
                        }
                        i++;
                     
                     
                      if(count==0)
                {
                	std::cout<<"Prime Numbers: "<<n;
		} 
		    n++;   
                }    
                
	
	}
	return 0;
	         
}
