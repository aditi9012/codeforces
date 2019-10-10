#include<iostream>
using namespace std;
int main()
{
	signed int n,v;
	cin>>n>>v;
	signed int a[n],t=0;
	for(signed int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(signed int i=0;i<n-1;i++)
	{
	
	t=max(t,a[i]-a[i+1]-v);
}
	cout<<t<<endl;
	return 0;
}

