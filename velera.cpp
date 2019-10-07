#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int n,v;
    cin>>n>>v;
    for(int i=0;i<n;i++)
    {
        int k,s;
        bool flag=false;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>s;
            if(!flag && s<v)
            {
                a.push_back(i+1);
                flag=true;

            }


        }

    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";

    }

    return 0;

}

