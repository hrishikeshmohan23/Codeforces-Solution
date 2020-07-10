#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
		if((a[i]%14==1 || a[i]%14==2 || a[i]%14==3 || a[i]%14==4 || a[i]%14==6 || a[i]%14==5)&& a[i]>14)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
