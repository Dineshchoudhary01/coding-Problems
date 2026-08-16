#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int x,y;
        cin >>x>>y;
        vector<int> ans;
        for(int i=1; i<=10; i++){
             int start = 10 * (i - 1) + 1;
            int end = 10 * i;
            if(start <=x && x<=end){
                ans.push_back(i);
            }
            if(start <=y && y <= end){
                ans.push_back(i);
            }
        }
        cout << abs(ans[0] - ans[1]) << endl;
    }
   return 0;
}