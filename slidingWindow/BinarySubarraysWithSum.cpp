#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {0,0,0,0,0};
    int goal = 0;
    int n = nums.size();
    int count = 0;
     int sum = 0;
     int left = 0;
    for(int right=0; right<n; right++){
        sum += nums[right];
      while(sum > goal){
        sum -= nums[left];
        left++;
      }
      count += right - left + 1;
    }
    cout << count;
       
   return 0;
}