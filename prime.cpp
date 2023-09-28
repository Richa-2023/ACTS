#include<iostream>
int main()
{
    int m,n,i=2;
    
    std::cout<<"Enter Numbers: ";
    std::cin>>m>>n;
 
    int ctr=0;

    while(m<=n)
    {
       
        while(i<=m/2)
        {
            if(m%i==0)
            {
                ctr++;
                i++;
            }
        }
            if(ctr==0)
            {
                std::cout<<m;
                
            }
        
       m++; 
    }
    return 0;

}