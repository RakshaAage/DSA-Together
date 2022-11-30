//Problem Name:Find minimum and maximum element in an array
//Problem link: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&curated[]=8&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
 long long minElement = a[0], maxElement = a[0];

	for (int i = 0; i < n; i++) {
		minElement = min(a[i], minElement);
		maxElement = max(a[i], maxElement);
	}

	return {minElement, maxElement};   
}
