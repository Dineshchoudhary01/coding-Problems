#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr = {4,7,1,0};
    int n = arr.size();
    vector<int> ans;
    int maxi = arr[n];

    for(int i=n-1; i>=0; i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    reverse(ans.begin(),ans.end());
    for(auto ch : ans){
        cout << ch << endl;
    }
   return 0;
}