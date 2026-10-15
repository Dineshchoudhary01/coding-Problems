#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1,2,1};
    int n = nums.size();
    int sum = 0;
   for(int i=0; i<n; i++){
    unordered_set<int> st;
    for(int j=i; j<n; j++){
        st.insert(nums[j]);
        int distinct = st.size();
       sum += distinct * distinct;
        
    }
   }
   cout << sum;

return 0;
}