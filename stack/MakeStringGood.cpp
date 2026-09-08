#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s = "leEeetcode";
    stack<int> st;

    for(int i=0; i<=s.length()-2; i++){
        if( !st.empty() && (s[i]) == tolower(st.top()) && s[i]!= st.top()){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        cout << ans;

   

   return 0;
}