#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s,x="hello";
	char a[6];
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
			break;
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
			break;
			
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
			break;
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
			break;
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
				break;
			}
		j++;
	}
	cout<<a;
	if(strcmp(a,"hello")==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
	
	

