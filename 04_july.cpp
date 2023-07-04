//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(vector<int>& a, int n, long k) 
    {
          if (k <= 1)
            return 0;

        int count = 0;
        int start = 0;
        int end = 0;
        long long product = 1;

        while (end < n) {
            product *= a[end];

            while (product >= k) {
                product /= a[start];
                start++;
            }

            count += end - start + 1;
            end++;
        }

        return count;
    }
        
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends