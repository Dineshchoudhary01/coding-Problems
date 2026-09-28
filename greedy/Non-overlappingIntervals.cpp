#include<bits/stdc++.h>
using namespace std;
int main()
{

     vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3}};
     int n = intervals.size();
     sort(intervals.begin(),intervals.end());
     int lastend = intervals[0][1];
     int count = 0;

     for(int i=1; i<n; i++){
        if(intervals[i][0] < lastend){
            count++;
            lastend = min(lastend,intervals[i][1]);
        }else{
            lastend = intervals[i][1];
        }
     }

     cout << count;

   return 0;
}