#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count=0,k=0;
	vector<int> v;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==')')
		{
			s[i]='#';
			k=1;
			count++;
			v.push_back(i+1);
		}
	}
	cout<<k<<endl;
	cout<<count;
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	
	
}
