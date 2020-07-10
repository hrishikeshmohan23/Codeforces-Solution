
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,count=0;
	string s;
	cin>>n>>s;
	vector<int> v;
	for(int i=0;i<=n;i++)
	{
		if(s[i]=='B')
		{
	        c++;
		}
		else if(s[i]=='W' && s[i-1]=='B')
		{	
			v.push_back(c);
			c=0;
			count++;
		}
		else if(s[i]=='\0' && c!=0)
		{
			v.push_back(c);
			count++;
	    }
	}
	cout<<count<<endl;
	for(auto it:v)
	    cout<<it<<" ";
}
