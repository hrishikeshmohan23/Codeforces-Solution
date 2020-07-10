#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,a;
	cin>>n>>x>>a;
	long long t=a/x;
	long long total=n/t;
	if(n%t!=0)
		total++;
	cout<<total;
}
