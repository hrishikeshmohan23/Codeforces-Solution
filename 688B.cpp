#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,r;
	cin>>s;
	for(int i=s.size()-1;i>=0;i--)
	s+=s[i];
	cout<<s;
}
