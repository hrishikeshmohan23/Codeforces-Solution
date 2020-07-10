#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long sum=0,k,n;
		cin>>n>>k;
		if(k>n)
		{
			cout<<"NO\n";
		}
		else if(k==1)
		cout<<"YES\n"<<n<<endl;
		else if(k==2 && n%2!=k%2)
		cout<<"NO\n";
		else if(n==k)
		{
			cout<<"YES\n";
			for(int i=0;i<k;i++)
				cout<<1<<" ";
			cout<<endl;
		}
		else if(n%2==k%2)
		{
			cout<<"YES\n";
			for(int i=0;i<k-1;i++)
			cout<<1<<" ";
			cout<<n-(k-1)<<endl;
			cout<<endl;
		}
		else{
			if(n/2>=k && k%2)
			{
				cout<<"YES\n";
				for(int i=0;i<k-1;i++)
				cout<<2<<" ";
				cout<<(n-((k-1)*2));
				cout<<endl;
			}
			else cout<<"NO\n";
		}
		
	}
}
