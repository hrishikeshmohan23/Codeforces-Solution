// C++ implementation to make 
// the array elements divisible by K 
#include <bits/stdc++.h> 
using namespace std; 

// Function to make array divisible 
pair<long long int,long long int> makeDivisble(long long arr[], long long n, long long k) 
{ 
	
	vector<long long int>b1; 
	vector<long long int>b2; 
	long long int c, suml, sumr, index, rem; 
	
	// For each element of array 
	// how much number to be subtracted 
	// to make it divisible by k 
	for (long long int i = 0; i < n; i++) 
		b1.push_back(arr[i] % k); 
	
	// For each element of array 
	// how much number to be added 
	// to make it divisible by K 
	for (long long int j = 0; j < n; j++) 
		if ((arr[j] % k) != 0) 
			b2.push_back(k - (arr[j] % k)); 
		else
			b2.push_back(0); 
			
	c = 0; 
	float mini = INT_MAX; 
	suml = 0; 
	sumr = 0; 
	index = -1; 
	
	// Calculate minimum difference 
	for (long long int c = 0; c < n; c++) 
	{ 
		suml = accumulate(b1.begin(),b1.begin() + c + 1, 0); 
		sumr = accumulate(b2.begin() + c + 1 , b2.end(), 0); 
		if (suml >= sumr) 
		{ 
			rem = suml - sumr; 
			if (rem < mini) 
			{ 
				mini = rem; 
				index = c; 
			} 
		} 
	} 
	
	return make_pair(index, mini); 

} 

// Driver Code 
int main() { 
int t;
cin>>t;
while(t--)
{
	long long n,k;
	cin>>n>>k;
	long long arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i]; 
	pair<long long int ,long long int>ans; 
	ans = makeDivisble(arr, n, k); 
	cout << ans.first << " " << ans.second; 
	
	return 0; 
}
} 

// This code is contributed by Atul_kumar_Shrivastava 

