#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "A man, a Plan, a Canal: Panama";
     
    string ch = "";

    for(auto c : s){
        if(isalnum(c)){
            ch += tolower(c);
        }
    }

    int start = 0;
    int end = ch.length()-1;
    while(start < end){
        if(ch[start] != ch[end]){
            cout << false;
            return 0;
        }else{
           start++;
           end--;
        }
    }
     
     cout << true;




   return 0;
}