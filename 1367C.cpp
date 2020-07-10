#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		long long n,k,j=0,count=0,count1=0,a=0;
		string s;
		cin>>n>>k;
		s[0]='1';
		s[n]='1';
		for(int i=0;i<=n;i++)
		{
			if(i && i!=n)
			cin>>s[i];
			if(s[i]=='0')
			{
				count++;
				count1++;
				j=i;
			}
			if(count && s[i]=='1')
			{
				a+=count/k*2;
				count=0;
			}
			
		}
		cout<<(count/2*k)<<endl;
			
			
		}
	}
