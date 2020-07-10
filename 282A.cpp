#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	int n,x=0;
	cin>>n;
	while(n!=0)
	{
		cin>>s;
		if(s=="X++"||s=="x++")
		{
			x++;	
		}
		else if(s=="X--"||s=="x--")
		{
			x--;
		}
		else if(s=="++X"||s=="++x")
		{
			++x;
		}
		else if(s=="--X"||s=="--x")
		{
			--x;
		}
		n--;
	}
	cout<<x;
	return 0;
}
