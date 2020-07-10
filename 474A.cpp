#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	string s1,s="qwertyuiopasdfghjkl;zxcvbnm,./";
	cin>>c;
	cin>>s1;
	for(int i=0;i<s1.size();i++)
	{
		if(c=='L')
		{
			for(int j=0;j<s.size();j++)
			{
				if(s1[i]==s[j])
					cout<<s[j+1];
			}
		}
			else
				for(int j=0;j<s.size();j++)
				{
					if(s1[i]==s[j])
						cout<<s[j-1];
				}
			
		}
}
