#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,count=0,i,n,t,h,m=0;
	string x;
	vector <char> s;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		h=0;
		m=0;
		count=0;
		cin>>n;
		cin>>a>>b>>c;
		i=1;
		cin>>x;
		for(int i=0;i<x.size();i++)
		{
			if(x[i]=='P')
			{
				if(c>0)
				{
					c--;
					count++;
					s.push_back('S');
				}
			}
			if(x[i]=='S')
			{
				if(a>0)
				{
					a--;
					count++;
					s.push_back('R');
				}
			}
			else if(x[i]=='R')
			{
				if(b>0)
				{
					b--;
					count++;
					s.push_back('P');
				}
			}
		}
		if(n%2==0)
		h=n/2;
		else
		h=(n/2)+1;
		
			if(count>=h)
			{
				cout<<"YES"<<endl;;
				for(char d:s)
				{
					cout<<d;
				}
				cout<<endl;
			}
			
			else
			{
				cout<<"NO";
			}
		}
		return 0;
	}
	
			
