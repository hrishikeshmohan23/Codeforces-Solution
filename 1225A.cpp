#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a==9 && b==1)
	cout<<9<<" "<<10;
	else if((b-a)==1)
	{
		b=b*10;
		a=b-1;
		cout<<a<<" "<<b;
	}
	else if(a==b)
	{
		b=(b*10)+1;
		a=b-1;
		cout<<a<<" "<<b;
	}
	else
	cout<<-1;
}
