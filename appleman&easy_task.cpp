#include<iostream>
using namespace std;
int main()
{
	int n;
	bool s=true;
	cin>>n;
	char  a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
	}
	for(int i=0;i<n;i++)
	{  int  c=0;
		for(int j=0;j<n;j++)
		{
		  	
		  	if(i-1>=0 && a[i-1][j]=='o')
		  	c++;
		  	if(i+1 <n && a[i+1][j]=='o')
		  	c++;
		  	if(j-1>=0 && a[i][j-1]=='o')
		  	c++;
		  	if(j+1<n && a[i][j+1]=='o')
		  	c++;
            
            if(c%2==1)
            s=false;
		}
		
	}
	
	if(s)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	

	
	
	return 0;
}
