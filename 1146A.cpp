#include<bits/stdc++.h>
using namespace std;
int main()
{
	string t,s,s1,str;
	cin>>t;
	int i=t.size()-1;
	int j=0,k=0,count=0,n,f=0;
	for(int i=0;i<t.size();i++)
	{
		if(t[i]!='a')
		{
			cout<<1<<endl;
			s+=t[i];
			count++;
		}
	}
	count/=2;
	if(s.size()%2)
	int n=s.size()/2;
	else
	int n=(s.size()/2)-1;
	for(int i=0;i<s.size();i++)
	{
		if(i<=n)
		s1+=s[i];
		else
		str+=s[i];
	}
	for(int i=0;i<=n;i++)
	{
		if(s1[i]!=str[i])
		{
			f=1;
			break;
		}
	}
	if(!f)
	{
		for(int i=0;i<(t.size()-count);i++)
		cout<<t[i];
	}
	else
	cout<<":(";
	
	
	
}
