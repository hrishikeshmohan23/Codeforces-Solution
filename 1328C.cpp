#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s1,s2,s3;
		cin>>s1;
		s2+='1';
		s3+='1';
		for(int i=1;i<n;i++)
		{
			if(s1[i]=='0')
			{
				s2+='0';
				s3+='0';
			}
			else if(s1[i]=='1')
			{
				if(s2<=s3)
				{
					s2+='1';
					s3+='0';
				}
				else
				{
					s2+='0';
					s3+='1';
				}
			}
			else
			{
				if(s2==s3)
				{
					s2+='1';
					s3+='1';
				}
				else if(s2<s3)
				{
					s3+='0';
					s2+='2';
				}
				else
				{
					s2+='0';
					s3+='2';
				}
			}
		}
		cout<<s2<<endl;
		cout<<s3<<endl;
	}
}
