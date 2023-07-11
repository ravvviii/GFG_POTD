#include<bits/stdc++.h>
using namespace std;
#define MAX 1000


class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {

int top = 0;  // top row index
    int bottom = n - 1;  // bottom row index
    int left = 0;  // left column index
    int right = m - 1;  // right column index

    int count = 0;  // number of elements visited

    while (count < n * m) {
        // Traverse top row from left to right
        for (int i = left; i <= right; i++) {
            count++;
            if (count == k) {
                return a[top][i];
            }
        }
        top++;

        // Traverse right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            count++;
            if (count == k) {
                return a[i][right];
            }
        }
        right--;

        // Traverse bottom row from right to left
        for (int i = right; i >= left; i--) {
            count++;
            if (count == k) {
                return a[bottom][i];
            }
        }
        bottom--;

        // Traverse left column from bottom to top
        for (int i = bottom; i >= top; i--) {
            count++;
            if (count == k) {
                return a[i][left];
            }
        }
        left++;
    }

    // Return -1 if k is out of bounds
    return -1;

    }

};




    int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}