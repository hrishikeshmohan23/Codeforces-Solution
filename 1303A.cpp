#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count=0;
	string s,a;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		count=0;
		cin>>s;
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]=='1')
			{
				for(int k=i+1;s[k]!='1';k++)
				{
					if(s[k]=='0')
					{
						count++;
						if(k==s.size()-1 && s[k]!='1')
						{
							count=0;
							break;
						}
					}
					
				}
			}
		}
		cout<<count<<endl;
}
}
