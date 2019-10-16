#include<iostream>
using namespace std;
int main()
{
     long int n,d,t,c=0,e=0;
     cin>>n>>d;
     for(int i=0;i<n;i++)
     {
     	cin>>t;
     	e=e+t;
     	if(i<n-1)
     	{
     		c=c+2;
     		e=e+10;
		 }
     	else
     	{
     		c=c+(d-e)/5;
		 }
	 }
	if(e>d)
	cout<<-1;
	else
	cout<<c;
	return 0;
}
