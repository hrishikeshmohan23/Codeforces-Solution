#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int> m;
	long long int n;
	cin>>n;
	string s;
	for(long long int i=0;i<n;i++)
	{
		cin>>s;
		if(m[s])
		cout<<s<<m[s]<<endl;
		else
		cout<<"OK\n";
		m[s]++;
		
	}
}
