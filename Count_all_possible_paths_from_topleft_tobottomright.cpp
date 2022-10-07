//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
  long long int numberOfPaths(int m, int n)
  {
    // code here
    long long int mod = 1e9 + 7, ans = 0;
    long long int a[m][n] = {0};
    for (int i = m - 1; i >= 0; i--)
    {
      for (int j = n - 1; j >= 0; j--)
      {
        if (i == m - 1 || j == n - 1)
          a[i][j] = 1;
        else
          a[i][j] = (a[i + 1][j] + a[i][j + 1]) % mod;
      }
    }
    return a[0][0];
  }
};

//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> m >> n;
    Solution ob;
    cout << ob.numberOfPaths(m, n) << endl;
  }
  return 0;
}

// } Driver Code Ends