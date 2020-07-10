#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	string a,b,c;
	vector<string> v;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		string a,s;
		cin>>a;
		for(int i=0;i<n;i++)
		{
			string b,c;
			for(int k=0;k<n;k++)
			{
				if(k>=i)
				{
					b.push_back(s[i]);
				}
				else{
					c.push_back(s[i]);
				}
			}
			if((n-i)%2==1){
				reverse(c.begin(),c.end());
			}
			s=b+c;
			v.push_back(s);
		}
		string l=*min_element(v.begin(),v.end());
		int x=-1;
		for(int i=0;i<n;i++)
		{
			if(l==v[i])
			{
				x=i+1;
				break;
			}
		}
	cout<<l<<endl;
	cout<<x<<endl;
}
}
