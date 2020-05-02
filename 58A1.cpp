#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s;
	char a[10];
	int j=0,f=0,i=0;
	cin>>s;
	int n=s.size()-1;
	while(j<=n)
	{
		if(s[j]=='h')
		{
			a[i]='h';
			i++;
			j++;	
		}
		else
		j++;
	}
	while(j<=n)
	{
		if(s[j]=='e')
		{
			a[i]='e';
			i++;
			j++;	
		}
		else
		j++;
	}
	while(j<=n)
	{
		if(s[j]=='l')
		{
			a[i]='l';
			i++;
			j++;	
		}
		else
		j++;
	}
	while(j<=n)
	{
		if(s[j]=='l')
		{
			a[i]='l';
			i++;
			j++;	
		}
		else
		j++;
	}
	while(j<=n)
	{
		if(s[j]=='o')
		{
			a[i]='o';
			i++;
			j++;	
		}
		else
		j++;
	}
	cout<<a;
	return 0;
}
