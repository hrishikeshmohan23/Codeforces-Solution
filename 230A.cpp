#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,x,sum1,sum2=0;
	cin>>x>>n;
	sum1=x;
	for(int i=0;i<n;i++)
	{
		cin>>s>>x;
		sum2=s;
	}
	cout<<sum1<<" "<<sum2;
	if(sum1>=sum2)
		cout<<"YES";
	else
		cout<<"NO";
}
