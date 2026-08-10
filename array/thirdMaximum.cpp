#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums =  {3,2,1};
     sort(nums.begin(), nums.end());

        int count = 1;
        int prev = nums[nums.size() - 1];

        for (int i = nums.size() - 2; i >= 0; i--) {
            
            if (nums[i] != prev) {
                count++;
                prev = nums[i];
            }

            if (count == 3) {
                return nums[i];
            }
        }
         cout << nums[nums.size() - 1];

   return 0;
}