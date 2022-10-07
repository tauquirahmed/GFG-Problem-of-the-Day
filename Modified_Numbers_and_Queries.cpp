//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
  int sumprime(int n)
  {
    if (n == 1)
      return 1;
    int sum = 0;
    if (n % 2 == 0)
      sum += 2;
    while (n % 2 == 0)
    {
      n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i++)
    {
      if (n % i == 0)
        sum += i;
      while (n % i == 0)
      {
        n /= i;
      }
    }
    if (n > 2)
      sum += n;
    return sum;
  }

  int sumOfAll(int l, int r)
  {
    // code here
    int ans = 0, i;
    for (i = l; i <= r; i++)
    {
      ans += sumprime(i);
    }
    return ans;
  }
};

//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int l, r;
    cin >> l >> r;
    Solution ob;
    cout << ob.sumOfAll(l, r) << endl;
  }
  return 0;
}

// } Driver Code Ends