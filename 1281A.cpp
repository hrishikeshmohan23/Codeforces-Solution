#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	string s;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		s=" ";
		cin>>s;
		n=s.size();
		if(s[n-2]=='p' && s[n-1]=='o')
			cout<<"FILIPINO"<<endl;
		else if(s[n-4]=='d' && s[n-3]=='e' && s[n-2]=='s' && s[n-1]=='u')
			cout<<"JAPANESE"<<endl;
		else if(s[n-4]=='m' && s[n-3]=='a' && s[n-2]=='s' && s[n-1]=='u')
			cout<<"JAPANESE"<<endl;
		else if(s[n-5]=='m' && s[n-4]=='n' && s[n-3]=='i' && s[n-2]=='d' && s[n-1]=='a')
			cout<<"KOREAN"<<endl;
	}
}

