#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> temperature = {73,74,75,71,69,72,76,73};
   int n = temperature.size();
   vector<int> result;
   for(int i=0; i<n; i++){
    int ans = 0;
    for(int j=i+1; j<n; j++){
        if(temperature[j] > temperature[i]){
              ans = j-i;
              break;    
    }
   }
    result.push_back(ans);
}
   
   for(auto ch : result){
    cout << ch << endl;
   }








   return 0;
}