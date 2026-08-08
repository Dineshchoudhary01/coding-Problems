#include<bits/stdc++.h>
using namespace std;
int main()
{

     vector<string> mentions = {"zara","nike","puma","nike","zara","nike"};
     int k = 2;
    
     unordered_map<string,int> mp;
     vector<pair<string,int>> v;
     
     for(auto ch : mentions){
        mp[ch]++;
     }

    
     
     for(auto c : mp){
        v.push_back({c.first,c.second});
     }

     sort(v.begin(),v.end(),[](auto &a, auto &b){
          if(a.second != b.second){
              return a.second > b.second;
          }
          return a.first < b.first;
     });
     
     for(int i=0; i<k; i++){
        cout << v[i].first << endl;
     }
     

   return 0;
}