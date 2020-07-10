#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str;
	set<char> s;
	cin>>n;
	cin>>str;
	for(int i=0;i<str.size();i++)
	s.insert(str[i]);
	if((str.size()>s.size()) || s.size()==1)
	cout<<"Yes";
	else
	cout<<"No";
}
