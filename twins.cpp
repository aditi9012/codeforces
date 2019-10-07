#include<stdio.h>
int main()
{
	int n,temp,s=0,s1=0,c=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	s=s/2;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
for(int i=n-1;i>=0;i--)
{
	s1=s1+a[i];
	c++;
	
	if(s1>s)
	{
	  break;	
	}
	
}
printf("%d",c);
	return 0;
}
