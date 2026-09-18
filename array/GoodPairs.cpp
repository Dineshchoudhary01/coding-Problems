#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> freq;
    int ans = 0;

    for (int x : nums) {
        ans += freq[x];
        freq[x]++;
    }

    cout << ans << endl;

    return 0;
}