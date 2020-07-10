#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,x=0;
	cin>>a>>b>>c;
	if(a+b<=c)
		x+=c-(a+b)+1;
	else if(c+b<=a)
		x=a-(c+b)+1;
	else if(a+c<=b)
		x=b-(a+c)+1;
	cout<<x;
}
