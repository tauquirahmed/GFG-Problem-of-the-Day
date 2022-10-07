//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
  bool isPowerOfTwo(int n)
  {
    if (n == 0)
      return false;

    return (ceil(log2(n)) == floor(log2(n)));
  }

  string lexicographicallySmallest(string S, int K)
  {
    // code here
    string str = S;
    int n = S.size(), k = K;
    if (isPowerOfTwo(n))
    {
      k /= 2;
    }
    else
    {
      k *= 2;
    }

    if (k >= n)
    {
      return "-1";
    }

    string ans = "";
    stack<char> st;
    int removed = 0;
    for (int i = 0; i < n; i++)
    {
      while ((!st.empty()) && (removed < k) && (st.top() > str[i]))
      {
        st.pop();
        removed++;
      }
      st.push(str[i]);
    }
    while (removed < k)
    {
      st.pop();
      removed++;
    }
    while (!st.empty())
    {
      ans += st.top();
      st.pop();
    }
    reverse(ans.begin(), ans.end());

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
    string S;
    int k;
    cin >> S >> k;
    Solution ob;
    cout << ob.lexicographicallySmallest(S, k) << endl;
  }
  return 0;
}

// } Driver Code Ends