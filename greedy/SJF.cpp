#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > bt = {4,1,3,7,2};
    int n = bt.size();
    sort(bt.begin(),bt.end());
    int totalwt = 0;
    int wt = 0;
    for(int i=0; i<n; i++){
        totalwt += wt;
        wt += bt[i];
    }
    cout << totalwt/n << endl;

   return 0;
}