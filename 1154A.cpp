#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[4],x,y,z;
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	x=a[3]-a[0];
	y=a[3]-a[1];
	z=a[3]-a[2];
	cout<<x<<" "<<y<<" "<<z;
}
