#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
   
     vector<int> result;
   for(int i=0; i<n; i++){
    result.push_back(nums[i]);
    result.push_back(nums[i + n]);

   }
    for(auto ch : result){
        cout << ch << endl;
    }

   return 0;
}