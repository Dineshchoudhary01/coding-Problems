#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "a#c";
    string t = "b";

    string a = "";
    string b = "";
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] != '#'){
            a.push_back(s[i]);
        }else{
            if(!a.empty()){
                a.pop_back();
            }
        }
    }

    int e = t.length();
    for(int i=0; i<e; i++){
        if(t[i] != '#'){
            b.push_back(s[i]);
        }else{
            if(!b.empty()){
                b.pop_back();
            }
        }
    }

    if(a == b){
        cout << true;
    }else{
        cout << false;
    }
   return 0;
}