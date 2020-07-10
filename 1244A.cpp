#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,d,k,x,y,pen=0,pencil=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>c>>d>>k;
		pen=a/c;
		pencil=b/d;
		if(a%c!=0)
		pen++;
		if(b%d!=0)
		pencil++;
		if(pen+pencil>k)
		cout<<"-1"<<endl;
		else
		{
			cout<<pen<<" "<<pencil<<endl;
		}
	}
	return 0;
}
