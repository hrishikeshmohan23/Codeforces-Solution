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
    ll c=0;
	string s,s1;
	char ch='a';
	s+=ch;
	cin>>s1;
	s+=s1;
	for(int i=0;i<s1.size();i++)
	{
		if(abs((s[i]-'0')-(s1[i]-'0'))<=13)
		c+=abs((s[i]-'0')-(s1[i]-'0'));
		else
		c+=26-(abs((s[i]-'0')-(s1[i]-'0')));
	}
	cout<<c;
}

