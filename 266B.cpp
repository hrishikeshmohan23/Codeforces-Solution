
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	long long int i=0,n,x,count=0;
	string s;
	cin>>n>>x>>s;
	char temp;
		for(int j=0;j<x;j++)
		{
		    for(int i=0;i<n;i++)
		    {
			    if(s[i]=='B' && s[i+1]=='G')
			    {
				    temp=s[i];
				    s[i]=s[i+1];
				    s[i+1]=temp;
			    }
		    }
		}
	cout<<s;
	return 0;
}

