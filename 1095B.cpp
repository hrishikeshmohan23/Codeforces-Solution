#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s1,s2;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	s1=a[n-2]-a[0];
	s2=a[n-1]-a[1];
	cout<<min((s1=a[n-2]-a[0]),(a[n-1]-a[1]));
}
