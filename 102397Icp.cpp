#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[5];
	cin>>n;
	string s;
	a[0]=0;
	a[1]=0;
	a[2]=0;
	a[3]=0;
	a[4]=0;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i]=='a')
			a[0]++;
		if(s[i]=='b')
			a[1]++;
		if(s[i]=='c')
			a[2]++;
		if(s[i]=='d')
			a[3]++;
		if(s[i]=='e')
			a[4]++;
	}
	
	cout<<min(a[0],a[1],a[2],a[3],a[4])<<" "<<max(a[0],a[1],a[2],a[3],a[4]);
}
	

