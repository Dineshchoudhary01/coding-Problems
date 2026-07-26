#include<bits/stdc++.h>
using namespace std;
int main()
{


    vector<vector<int>> accounts = {
        {1,2,3},
        {3,2,1}
    };

    int row = accounts.size();
    int col = accounts[0].size();
    
    int maxwealth = 0;
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0; j<col; j++){
          sum += accounts[i][j];
          
        }
        maxwealth = max(sum , maxwealth);
    }
    cout << maxwealth;
   return 0;
}