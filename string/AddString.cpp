#include<bits/stdc++.h>
using namespace std;

int convert(string s){
    int decimal = 0;

    for(int i=0; i<s.size(); i++){
        decimal = decimal * 2 + (s[i] - '0');

    }
    return decimal;
}

string toBinary(int n){
    if(n==0) return "0";

    string ans = "";

    while(n > 0){
        ans += (n%2) + '0';
        n /= 2;
    }
    reverse(ans.begin(),ans.end());

    return ans;
}

string addBinary(string a, string b){
    int num1 = convert(a);
    int num2 = convert(b);

    int sum = num1 + num2;

    return toBinary(sum);
}


int main()
{
    string a = "11";
    string b = "1";
    string result = addBinary(a,b);
    cout << result;
   return 0;
}