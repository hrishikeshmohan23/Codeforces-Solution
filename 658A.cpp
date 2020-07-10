#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c;
	cin>>n>>c;
	int p[n],t[n];
	for(int i=0;i<n;i++)
		cin>>p[i];
	for(int i=0;i<n;i++)
		cin>>t[i];
	int s1=0,s2=0,s3=0,s4=0;
	for(int i=0;i<n;i++)
	{
		s2+=t[i];
		s1+=max(0,(p[i]-(s2*c)));
	}
	for(int i=n-1;i>=0;i--)
	{
		s3+=t[i];
		s4+=max(0,(p[i]-(s3*c)));
	}
	if(s1<s4)
		cout<<"Radewoosh";
	else if(s1==s4)
		cout<<"Tie";
	else
		cout<<"Limak";
	
}
