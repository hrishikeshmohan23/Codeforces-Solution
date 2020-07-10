#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s;
	set <char> s1;
	while(s!='}')
	{
		cin>>s;
		if(s!='{' && s!=',' && s!=' ' && s!='}')
			s1.insert(s);
}
	cout<<s1.size();
}
