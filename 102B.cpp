#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long x=0,count=0,a=0;
	for(int i=0;i<s.size();i++)
	{
			x+=(s[i]-'0');
	}
	if(s.size()==1)
		count=0;
	else
		count=1;
	while(x/10)
	{
		while(x!=0)
		{
			a+=x%10;
			x/=10;
		}
		count++;
		x=a;
		a=0;
			
	}
	cout<<count;
	
}
