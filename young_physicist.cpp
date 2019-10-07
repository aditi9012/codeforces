#include<stdio.h>
int main()
{
	int n,s1=0,s2=0,s3=0;
	scanf("%d",&n);
	signed int a[n],b[n],c[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
		s1=s1+a[i];
		s2=s2+b[i];
		s3=s3+c[i];
		
	}
	if(s1==0 && s2==0 && s3==0)
	{
		printf("YES");
	}
	else
	printf("NO");
	return 0;
}
