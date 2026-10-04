#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> heights = {4,2,3,1};
    int n = heights.size();
    stack<int> st;
    vector<int> ans;
        for(int i=n-1; i>=0; i--){
        while (!st.empty() && heights[st.top()] <= heights[i])
        {
           st.pop();
        }

       if(st.empty()){
        ans.push_back(i);
       }

       st.push(i);

       reverse(ans.begin(), ans.end());
         
    }
    for(int index : ans){
        cout << index;
    }
   return 0;
}