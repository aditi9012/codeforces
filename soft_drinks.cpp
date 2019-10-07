#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int t1,t2,t3,a,b,u,x;
	t1=(k*l)/nl;
	t2=(c*d);
	t3=p/np;
	a=t1/n;
	b=t2/n;
	u=t3/n;
	if(a<b)
	{
		if(a<u)
		cout<<a;
		else 
		cout<<u;
	}
	else
	{
		if(b<u)
		cout<<b;
		else 
		cout<<u;
	}
	
	
	
	
	return 0;
}
