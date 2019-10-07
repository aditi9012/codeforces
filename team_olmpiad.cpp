#include<iostream>
using namespace std;
int main()
{
	long int n,q=0,w=0,e=0,f=0,v=0,o=0;
	cin>>n;
	long int a[n],b[10000],c[10000],d[10000],k[10000],l[10000],m[10000];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			b[q]=a[i];
			q++;
			k[f]=i;
			f++;
		}
			else if(a[i]==2)
		{
			c[w]=a[i];
			w++;
			l[v]=i;
			v++;
			
     	}
     	else if(a[i]==3)
		{
			d[e]=a[i];
			e++;
			m[o]=i;
			o++;
	    }
		
	}
	if(q==0||w==0||e==0)
	cout<<0;
	else
	{
	
	long int z=min(q,w);
	long int s=min(z,e);
	  cout<<s<<endl;
	for(int y=0;y<s;y++)
	{
		cout<<k[y]<<" "<<l[y]<<" "<<m[y]<<endl;
	}
}
	return 0;
}
