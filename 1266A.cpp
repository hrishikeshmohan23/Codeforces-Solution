#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,sum,x1=0,counte,count0,rem;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		sum=0;
		x1=s.size();
		x=0;
		counte=0;
		count0=0;
		for(int j=0;j<x1;j++)
		{
			if(s[j]=='2' || s[j]=='4' || s[j]=='6' || s[j]=='8' || s[j]=='0')
				counte++;
			if(s[j]=='0')
				count0++;
			if(s[j]=='0')
				sum+=0;
			else if(s[j]=='1')
				sum+=1;
			else if(s[j]=='2')
				sum+=2;
			else if(s[j]=='3')
				sum+=3;
			else if(s[j]=='4')
				sum+=4;
			else if(s[j]=='5')
				sum+=5;
			else if(s[j]=='6')
				sum+=6;
			else if(s[j]=='7')
				sum+=7;
			else if(s[j]=='8')
				sum+=8;
			else if(s[j]=='9')
				sum+=9;	
		}
		if(sum%3==0 && count0>=1 && counte>=2)
			cout<<"red"<<endl;
		else
			cout<<"cyan"<<endl;
	}
	return 0;
}
