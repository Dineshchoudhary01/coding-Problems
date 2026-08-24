#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> fruits = {1,2,1};
   int n = fruits.size();
   int maxi = 0;


  for(int i=0; i<n; i++){
    set<int> st;
    for(int j=i; j<n; j++){
        st.insert(fruits[j]);
        if(st.size() <= 2){
            maxi = max(maxi,j-i+1);
        }else{
            break;
        }
    }
  }
  cout << maxi << endl;
   




   return 0;
}