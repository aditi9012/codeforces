#include<iostream>
#include<string>
using namespace std;
int main()
{
	int r,c,a[11]={0},b[11]={0};
	string s;
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		cin>>s;
		for(int j=0;j<c;j++)
		{
			if(s[j]=='S')
			{
				a[i]=1;
				b[j]=1;
			}
		}
	}
	int count=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i]==0 || b[j]==0)
			count++;
		}
	}
	cout<<count;
	return 0;
}
