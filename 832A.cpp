#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,k;
  cin >> n >> k;
  n  = (n / k);
  if( n % 2)
  cout << "YES";
  else
  cout << "NO";

  return 0;
}
