#include<bits/stdc++.h>
using namespace std;
void solve()
{

	string s;
	cin>>s;
	long long n=s.size();
	for(int i=0;i<s.size();i+=2)cout<<s[i];
	cout<<s[n-1]<<endl;
			
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
