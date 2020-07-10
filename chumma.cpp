#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	vector <int> v;
	cin>>x;
	v.push_back(x);
	v.push_back(12);
	v.push_back(145);
	v.push_back(119);
	v.push_back(1232);
	v.push_back(12);
	for(int i:v)
	cout<<i;
	cout<<*(v.lower_bound(1232));
}
