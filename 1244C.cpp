#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long f=0,n,p,w,d,x=0,y=0,z,j=0,i=0;
	cin>>n>>p>>w>>d;
	x=p/w;
	 j=x-1;
	y=(p-x*w)/d;
	z=n-(x+y);
	if((x+y+z)==n && (x*w+y*d)==p)
	{
		cout<<x<<" "<<y<<" "<<z;
		f=1;
	}
	else
	{  
		for(i=j;i>=0;i--)
		{
			x=i;
			y=(p-x*w)/d;
			if((p-x*w)%d!=0)
				y+=1;
			z=n-x+y;
			if((x*w+y*d)==p && (x+y+z)==n)
			{
				cout<<x<<" "<<y<<" "<<z;
				f=1;
				break;
			}
		}
	}
	if(f==0)
	cout<<"-1";
	return 0;
}
