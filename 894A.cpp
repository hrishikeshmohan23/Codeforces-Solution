#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0,f=1,count=0;
	while(i<s.size())
	{
		if(s[i]=='Q' && f==1)
		{
			f=2;
		}
		else if(s[i]='A' && f==2)
			f=3;
		else if(s[i]=='Q' && f==3)
		{
			f=1;
			count++;
		}
		i++;
	}
	cout<<count;
	
	
}
