#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "())";
    int n = s.length();
    int open = 0;
    int ans = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '('){
            open++;
        }else{
            if(open>0){
                open--;
            }else{
                ans++;
            }
        }
    }
    int sum = ans+open;
    cout << sum;
   return 0;
}