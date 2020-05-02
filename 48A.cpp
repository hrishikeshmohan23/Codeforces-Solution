#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	string s;
	s+=a[0];
	s+=b[0];
	s+=c[0];
	
	if (s=="prr" || s=="rss" || s=="spp")
		cout<<"F";
	else if (s=="rpr" || s=="srs" || s=="psp")
		cout<<"M";
	else if (s=="rrp" || s=="ssr" || s=="pps")
		cout<<"S";
	else 
 	   cout<<"?";
}
