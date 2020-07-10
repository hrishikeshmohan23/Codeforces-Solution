#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,n1=0;
	cin>>s;
	n=s.size();
	int a[(n/2)+1];
	for(int i=0;i<n;i++)
	{
		if(s[i]=='3' || s[i]=='2' ||s[i]=='1')
		{
			a[n1]=int(s[i]);
			n1++;
		}
	}
	sort(a, a+n1);
	for(int i=0;i<n1;i++)
	{
		if(a[i]==49)
		{
			a[i]=1;
		}
		else if(a[i]==50)
		{
			a[i]=2;
		}
		else if(a[i]==51)
		{
			a[i]=3;
		}
	}
	for(int i=0;i<n1;i++)
	{
		if(i==n1-1)
		{
			cout<<a[i];
		}
		else
		cout<<a[i]<<"+";
	}
	return 0;
}
