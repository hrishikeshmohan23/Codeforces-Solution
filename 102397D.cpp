#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n+1);
	reverse(a,a+n+1);
	int i=1,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		cout<<sum<<endl;
		if(sum>=x)
		break;
	}	
	if(i==n+1)
	cout<<-1;
	else
	cout<<i+1;
}
