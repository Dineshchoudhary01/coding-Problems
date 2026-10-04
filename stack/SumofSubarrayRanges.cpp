#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {4,-2,-3,4,1};
    int n = nums.size();
    int sum = 0;

    for(int i=0; i<n; i++){
        int largest = nums[i];
        int smallest = nums[i];
        for(int j=i; j<n; j++){
             largest = max(largest,nums[j]);
             smallest = min(smallest,nums[j]);
            int difference = abs(largest- smallest);
            sum += difference;
        }
    }

    cout << sum;
   return 0;
}