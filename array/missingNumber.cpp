#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 0, 1};

    int n = nums.size();
    int ans = n;

    for (int i = 0; i < n; i++) {
        ans ^= i;
        ans ^= nums[i];
    }

    cout << "Missing number: " << ans << endl;

    return 0;
}