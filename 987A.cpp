#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==0)
		cout<<"6\nTime\nMind\nSoul\nPower\nReality\nSpace";
	else if(n==6)
	cout<<0;
	else
	{
		string s;
		int a[6];
		a[0]=1;
		a[1]=2;
		a[2]=3;
		a[3]=4;
		a[4]=5;
		a[5]=6;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			if(s=="purple")
				a[0]=0;
			else if(s=="green")
				a[1]=0;
			else if(s=="blue")
				a[2]=0;
			else if(s=="orange")
				a[3]=0;
			else if(s=="red")
				a[4]=0;
			else
				a[5]=0;
		}
		cout<<6-n<<endl;
		if(a[0])
		cout<<"Power\n";
		if(a[1])
		cout<<"Time\n";
		if(a[2])
		cout<<"Space\n";
		if(a[3])
		cout<<"Soul\n";
		if(a[4])
			cout<<"Reality\n";
		if(a[5])
			cout<<"Mind\n";
				
}
}

