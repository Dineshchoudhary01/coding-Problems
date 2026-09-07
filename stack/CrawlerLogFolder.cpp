#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> logs = {"d1/","d2/","../","d21/","./"};

    int n = logs.size();
    stack<string> st;
    for(int i=0; i<n; i++){
        if(logs[i] == "../"){
          if(!st.empty()){
            st.pop();
          }
        }else if(logs[i] == "./"){
            continue;
        }else{
            st.push(logs[i]);
        }
        
    }

    cout << st.size() ;






   return 0;
}