#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,y,z;
		cin>>x>>y;
		if(x<y)
			z=y-x;
		if(x%y==0)
			z=0;
		else	
			z=y-(x%y);
		cout<<z<<endl;
	}
}
