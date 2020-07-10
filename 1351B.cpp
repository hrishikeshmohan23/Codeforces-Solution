#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int f=0,a,b,i=1,c,d,area=0;
		cin>>a>>b>>c>>d;
		area=(a*b)+(c*d);
		if(a==b && b==c && c==d)
		f=1;
		if(a==b)
		{
			if(c+d==a)
			f=1;
		}
		if(a==c)
		{
			if(b+d==a)
			f=1;
		}
		if(a==d)
		{
			if(b+c==a)
			f=1;
		}
		if(b==c)
		{
			if(a+d==b)
			f=1;
		}
		if(b==d)
			if(a+c==b)
				f=1;
		if(c==d)
			if(a+b==c)
			f=1;
		if(f==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
	}
}
