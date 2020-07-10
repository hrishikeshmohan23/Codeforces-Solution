#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
 
    while (t--)
    {
        int N;
        cin >> N;
        
        int sum1 = (1 << N), sum2 = 0;
        
        for (int i = 1; i < N / 2; i++)
            sum1 += (1 << i);
        
        for (int i = N / 2; i < N; i++)
            sum2 += (1 << i);
        
        cout << sum1 - sum2 << endl;
    }
    return 0;
}
