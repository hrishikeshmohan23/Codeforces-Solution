#include<iostream>
using namespace std;
int main()
{
	int y=0,f=0,a,b,c,d;
	cin>>y;
	while(f==0)
	{
		y=y+1;
		a=y/1000;
		b=(y/100)%10;
		c=(y/10)%10;
		d=y%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			f=1;
		}
		
	}
	cout<<y;
	return 0;
}
