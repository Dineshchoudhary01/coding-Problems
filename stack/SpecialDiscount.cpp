#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> prices = {8,4,6,2,3};
    int n = prices.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        bool found = false;
        for(int j=i+1; j<n; j++){
            if(prices[j]<= prices[i]){
                int result = prices[i] - prices[j];
                ans.push_back(result);
                found = true;
                break;
            }
        }
       if(!found){
        ans.push_back(prices[i]);
       }
    }
    for(int it : ans){
        cout << it << endl;
    }
   return 0;
}