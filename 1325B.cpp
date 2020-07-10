#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		set<int> s;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			s.insert(x);
		}
		for(auto it:s)
		cout<<it<<" ";
		cout<<endl;
	}
}
