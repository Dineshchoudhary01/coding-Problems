
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwaps(vector<int>& arr, int n) {
    int COUNTONE = 0;

    // Step 1: Count total number of 1s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            COUNTONE++;
        }
    }

    // If array contains only 0s
    if (COUNTONE == 0) {
        return -1;
    }

    int MAXNUMONE = 0;

    // Step 2: Check every window
    for (int i = 0; i <= n - COUNTONE; i++) {
        int COUNTNUMONE = 0;

        for (int j = i; j < i + COUNTONE; j++) {
            if (arr[j] == 1) {
                COUNTNUMONE++;
            }
        }

        MAXNUMONE = max(MAXNUMONE, COUNTNUMONE);
    }

    // Step 3: Calculate minimum swaps
    return COUNTONE - MAXNUMONE;
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Minimum swaps required: "
         << minSwaps(arr, n) << endl;

    return 0;
}
