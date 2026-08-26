#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {3,6,9,1};
    int n = nums.size();
    int maxi = INT_MIN;

    if(n < 2){
        return 0;
    }
       sort(nums.begin(),nums.end());
    for(int i=0; i<n-2; i++){
    

        int diff = abs(nums[i] - nums[i+1]);
        maxi = max(maxi,diff);
    }
    cout << maxi;
   return 0;
}