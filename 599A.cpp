#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c;
	cin>>a>>b>>c;
	cout<<(min(a,b+c)+min(c,a+b)+min(b,c+a));	
}
