#include<stdio.h>
#include<stdlib.h>

int main()
{   
   int a[5][5],ans;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		   if(a[i][j]==1)
		   {
		   	if(i==2 && j==2)
		   	printf("0");
		   	else
		   	{
		   	    ans=abs(2-i)+abs(2-j);
				   printf("%d",ans);	
			   }
		   }
		
		}
	
		
	}
	return 0;
}


