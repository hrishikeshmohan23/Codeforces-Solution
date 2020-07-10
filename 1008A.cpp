#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count,flag=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='a' && s[i]!='e' && s[i]!='o' && s[i]!='i' && s[i]!='n' && s[i]!='u')
		{
			if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i'&& s[i+1]!='o'&& s[i+1]!='u')
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	cout<<"YES";
	else
	cout<<"NO";	
}
