#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,p;
	set <int> s;
	cin>>n;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>x;
		s.insert(x);
	}
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>x;
		s.insert(x);
	}
	if(s.size()==n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
}
