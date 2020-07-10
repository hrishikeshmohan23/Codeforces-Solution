#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,count=0,k;
	cin>>n>>h;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		if(k>h)
			count+=2;
		else
			count++;
	}
	cout<<count;
}
