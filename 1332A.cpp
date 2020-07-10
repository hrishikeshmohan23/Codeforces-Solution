#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,x1,x2,y1,y2,t,a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		x+=b-a;
		y+=d-c;
		if(x1==x2 && a+b!=0)
			cout<<"NO\n";
		else if(y1==y2 && c+d!=0)
			cout<<"NO\n";
		else if((x1<=x && x2>=x) && (y1<=y && y2>=y))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
