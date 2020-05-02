#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,max,p;
	cin>>a>>b;
	max=a;
	if(b>max)
		max=b;
	p=7-max;
	if(p==1)
		cout<<"1/6";
	else if(p==2)
		cout<<"1/3";
	else if(p==3)
		cout<<"1/2";
	else if(p==4)
		cout<<"2/3";
	else if(p==5)
		cout<<"5/6";
	else if(p==6)
		cout<<"1/1";
	
}
