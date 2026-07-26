#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {12,345,2,6,7896};
    int n = nums.size();
     int count = 0;
     for(int i=0; i<n; i++){
        int num = nums[i];
        int countdigit  = 0;

        while(num != 0){
            num = num / 10;
            countdigit++;
        }

        if(countdigit % 2 == 0){
            count++;
        }
     } 
      cout << count;

   return 0;
}