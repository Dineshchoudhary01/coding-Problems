#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2,4,6};
    int k = 3;
     int n  = nums.size();
     int ans  = 0;

     for(int i=0; i<n; i++){
        int oddcount = 0;
        for(int j=i; j<n; j++){
            if(nums[j] % 2 != 0){
                oddcount++;
            }
            if(oddcount == k){
                ans++;
            }
            if(oddcount > k){
                break;
            }
        }
     }
     cout << ans << endl;

   return 0;
}






