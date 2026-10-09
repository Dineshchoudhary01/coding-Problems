#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "))())(";
    int n = s.length();

    int open = 0;
    int add = 0;

    

    for(int i=0; i<n; i++){
       
        if(s[i] == '('){
            open++;
        }else{
            if(i + 1 < s.length() && s[i+1] == ')'){
              i++;
            }else{
                add++;
            }
            if(open > 0){
                open-- ;
            }else{
                add++;
            }
        }
    }
    add = add + (open * 2);
    cout <<  add << endl;
   return 0;
}