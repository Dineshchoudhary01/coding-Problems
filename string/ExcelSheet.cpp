#include<bits/stdc++.h>
using namespace std;
int main()
{
    string col = "AB";
    int n = col.length();
    int sum = 0;

    for(auto ch : col){
        sum = sum * 26 + (ch - 'A' + 1);
    }
    cout << sum;
   return 0;
}