#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int f=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='H'||s[i]=='Q'|| s[i]=='9')
		{
			cout<<"YES";
			f=1;
			break;
		}
	}
		if(f==0)
		{
			cout<<"NO";
		}
		return 0;
}
