#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x=0;
		cin>>n;
		x=n/7;
		if(n%7!=0)
		x++;
		cout<<x<<endl;
	}
}
