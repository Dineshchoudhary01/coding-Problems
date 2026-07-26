#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {4,2,1,1,2};
    int extraCandies = 3;
    int maxcandies = 0;

    for(int i=0; i<nums.size(); i++){
         maxcandies = max(maxcandies,nums[i]);
    }

       vector<bool> result;
    for(int i=0; i<nums.size();  i++){
       int maxsum = nums[i] + extraCandies;

       if(maxsum >= maxcandies){
        result.push_back(true);
       }else{
        result.push_back(false);
       }
       
    }
    for(auto ch : result){
        cout << ch << endl;
    }


   return 0;
}