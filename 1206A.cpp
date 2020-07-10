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
#define f first
#define s second

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	cin>>b[i];
	sort(b,b+m);
	cout<<a[n-1]<<" "<<b[m-1];
	
	return 0;
}

