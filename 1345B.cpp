#include<bits/stdc++.h>
 
using namespace std;
 
long long calc(long long n) 
{
  return n * (3 * n + 1) / 2;
}
 
int main() 
{
  int t;
  cin >> t;
 
  while(t--) 
  {
    long long int n;
    cin >> n;
    int count = 0;
    for (int i = 30000; i > 0; i--) 
	{
      int x = calc(i);
      while (x <= n) 
      {
        count++;
        n-=x;
      }
    }
    cout << count <<endl;
  }
  return 0;
}
