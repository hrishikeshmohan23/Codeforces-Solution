#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	float x=0;
	cin>>n;
	for(float j=1;j<=n;j++)
	{
		x=x+(1/j);
	}
	cout<<x;
}
