#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m,a,b,c,d,x,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		x=0;
		cin>>a>>b>>c>>d;
		x=a+b+c+d;
		m=a;
		if(b>m)
		m=b;
		if(c>m)
		m=c;
		if(x%3==0)
		{
			if(m<=(x/3))
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	
}
