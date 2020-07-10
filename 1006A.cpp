#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		a[i]--;
		cout<<a[i]<<" ";
	}
}
