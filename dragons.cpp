#include<iostream>
using namespace std;
int main()
{    
    long int s,n,c=0;
    cin>>s>>n;
    long int x[n],y[n],t1,t2;
    for(long int i=0;i<n;i++)
    {   
	    cin>>x[i]>>y[i];
	}
	for(long int i=0;i<n;i++)
	{
		for(long int j=0;j<n-i-1;j++)
		{
			
			if(x[j]>x[j+1])
			{
				swap(x[j],x[j+1]);
				swap(y[j],y[j+1]);
				
				
			}
			
		}
	}
	for(long int i=0;i<n;i++)
	{
	
	if(s>x[i])
	{
		c++;
	}
	s=s+y[i];
    
		}
		if(c==n)
		cout<<"YES";
		else
		cout<<"NO";

	return 0;
}
