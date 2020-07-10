#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b, p, f, h, c; 
		cin>>b>>p>>f>>h>> c;
		if (c>h)
		{ 
			swap(c,h);
			swap(f,p);
		}
		b/=2;
		int sum,m=min(p, b);
		sum=m*h;
		m = min(f, b-m); 
		sum+= m*c;
		cout<<sum<<endl;
	}
}
