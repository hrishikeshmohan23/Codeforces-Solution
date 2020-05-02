#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>s;
	n=(s.size()-1);
	for (int i=0;i<=n;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
		{
			cout<<"";
		}
		else if(isupper(s[i]))
		{
			s[i]=tolower(s[i]);
			cout<<"."<<s[i];
		}
		else
			cout<<"."<<s[i];
		
	}
	return 0;
}
