#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],count=0;
	vector<int> v;
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			v.push_back(a[i-1]);
			count++;
		}
	}
	cout<<count<<endl;
	for(auto it:v)
	{
		for(int i=1;i<=it;i++)
		cout<<i<<" ";
	}
}
