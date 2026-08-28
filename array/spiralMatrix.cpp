#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();

    int left = 0 , right = n-1 , top = 0 , botttom = m-1;

    while(top <= botttom && left <= right){
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        for(int i=top; i<= botttom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;


        if(top <= botttom){
            for(int i=right; i>=left; i--){
                ans.push_back(matrix[botttom][i]);
            }
            botttom--;

        }

        if(left <= right){
             for(int i=botttom; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for(auto ch : ans){
        cout << ch << " " ;
    }

   return 0;
}