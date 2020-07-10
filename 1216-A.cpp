#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,count=0;string s;
	cin>>n>>s;
	for (int i=0;i<n;i++)
	{
		if(i%2==1)
		{
			if(s[i]=='a'&&s[i-1]=='a')
			{
				count++;
				s[i]='b';
			}
			else if(s[i]=='b'&&s[i-1]=='b')
			{
				count++;
				s[i]='a';
			}
		}
	}
	cout<<count<<endl;
	cout<<s<<endl;
}

