#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char c;
	set<char> s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		c=tolower(c);
		s.insert(c);
	}
	if(s.size()==26)
		cout<<"YES";
	else
		cout<<"NO";
}
