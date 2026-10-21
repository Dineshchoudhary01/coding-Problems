

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, long long k) {
    unordered_map<long long, int> prefixSum;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == k) {
            maxLen = i + 1;
        }

        long long remaining = sum - k;

        if (prefixSum.find(remaining) != prefixSum.end()) {
            int len = i - prefixSum[remaining];
            maxLen = max(maxLen, len);
        }

        if (prefixSum.find(sum) == prefixSum.end()) {
            prefixSum[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestSubarrayWithSumK(arr, k) << endl;

    return 0;
}
