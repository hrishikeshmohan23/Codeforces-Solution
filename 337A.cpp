#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,min,max,mini=10001,diff;
	cin>>n>>m;
	set <int> s;
	for(int i=1;i<=m;i++)
		cin>>a;
		s.insert(a);
	/*for(int i=1;i<=m-n+1;i++)
	{
		max=a[i];
		min=a[i];
		for(int j=i;j<=n;j++)
		{
			if(max<a[j])
				max=a[j];
			if(min>a[j])
				min=a[j];
		}
		diff=max-min;
		if(diff<mini)
			mini=diff;
		cout<<max<<" "<<min<<" "<<diff<<" "<<mini<<endl;;
	}
	max=s.begin()+n;
	min=s.end()-n;
	mini=*max-*min
	cout<<mini;*/
	
}
