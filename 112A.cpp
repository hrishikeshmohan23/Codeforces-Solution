#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	char x;
	cin>>s>>t;
	int f=0;
	int n1=s.size();
	int n2=t.size();
	for(int j=0;j<n1;j++)
	{
	    x=tolower(s[j]);
	    s[j]=x;
	    x=tolower(t[j]);
	    t[j]=x;
	    if(int(s[j])>int(t[j]))
		{
			cout<<"1";
			f=1;
			break;
		}
		else if(int(s[j])<int(t[j]))
		{
			cout<<"-1";
			f=1;
			break;
		}
	}

	if(f==0)
	{
	cout<<"0";
	}
	return 0;
}
