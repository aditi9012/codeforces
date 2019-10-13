#include<iostream>
#include<string.h>
using namespace std;
int main()
{    int j=0,p=0;
	string s;
	string a="hello";
	cin>>s;
	
	int r=s.size();
	for(int i=0;i<r;i++)
	{       
        	if(s[i]==a[j])
	       {
	      	j++;
	     	p++;
			}	    
		}
		
		if(p==5)
		cout<<"YES";
		else
		cout<<"NO";
		return 0;
		
}
