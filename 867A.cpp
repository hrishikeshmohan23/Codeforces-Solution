#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c2=0,c1=0;
	cin>>n;
	char s[101];
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='S' && s[i+1]=='F')
		c1++;
		else if(s[i]=='F' && s[i+1]=='S')
			c2++;	
	}
	if(c1>c2)
	cout<<"YES";
	else
	cout<<"NO";
}
