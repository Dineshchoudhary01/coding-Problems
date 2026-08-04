#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> temperature = {30,40,35,50};
   int n = temperature.size();

   stack<int> st;
   for(int i=0; i<n-1; i++){
    int index = 0;
    while(!st.empty() && temperature[i] > temperature[stack.top()]){
         index = stack.top();

    }
   }
   return 0;
}