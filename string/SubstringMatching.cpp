#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "leetcode";
    string p = "ee*e";
     vector<string> SubString;
    int n = s.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
         SubString.push_back(s.substr(i, j-i+1));
        }
    }

    int pos = p.find("*");
    string left = p.substr(0,pos);
    string right = p.substr(pos + 1);
        bool found = false;
    for(auto str : SubString){
       if(str.size() >= left.size() + right.size()){
        string first = str.substr(0, left.size());
        string last = str.substr(str.size() - right.size());
        if(first == left && last == right){
            found = true;
            break;
        }
       }
    }
    cout << boolalpha << found;
   return 0;
}