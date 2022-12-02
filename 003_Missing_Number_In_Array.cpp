//Problem Name : Missing number in array
//Problem link : https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&curated[]=8&sortBy=submissions


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int total=1;
        for(int i=2;i<n+1;i++)
        {
            total+=i;
            total-=array[i-2];
        }
        return total;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
