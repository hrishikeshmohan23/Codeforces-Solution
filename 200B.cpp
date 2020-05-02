#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n,x,sum=0;
	float p;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
	}
	p=sum/n;
	cout<<p;
	
	
}
