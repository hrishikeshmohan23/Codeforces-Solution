#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define fi first
#define s second

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	int a[T],count1=0,count2=0,count3=0;
	for(int i=1;i<=T;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			count1++;
		else if(a[i]==2)
			count2++;
		else if(a[i]==3)
			count3++;
	}
	int n=min(count1,min(count3,count2));
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		int ar=0,b=0,c=0;
		for(int j=1;j<=T;j++)
		{
			
			if(a[j]==1 && ar==0)
			{
				cout<<j<<" ";
				a[j]=0;
				ar=2;
			}
			if(a[j]==2 && b==0)
			{
				cout<<j<<" ";
				a[j]=0;
				b=3;
				
			}
			if(a[j]==3 && c==0)
			{
				cout<<j<<" ";
				a[j]=0;
				c=4;
			} 
		}
		cout<<endl;
	}
}

