#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {8,1,2,2,3};
      int n = nums.size();
      vector<int> result;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
          if(j != i && nums[j] < nums[i]){
              count++;
          }
         
        }
         result.push_back(count);
    }
    for(int ch : result){
         cout << ch;
    }

   return 0;
}