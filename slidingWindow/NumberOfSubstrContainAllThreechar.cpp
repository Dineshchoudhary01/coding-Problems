#include<bits/stdc++.h>
using namespace std;
int main()
{
      string s = "abcabc";
      vector<string> substrings;
      for(int i=0; i<s.size(); i++){
        for(int len=1; len<=s.size()-i; len++){
           substrings.push_back(s.substr(i,len));
        }
      }
       int count = 0;
      for(string str: substrings){
        bool a=false, b=false, c=false;
        for(char ch : str){
            if(ch == 'a') a = true;
            if(ch == 'b') b = true;
            if(ch == 'c')  c = true;
        }

      if(a && b && c){
        count++;
        cout << str << endl;
      }
      }

    cout << "Total =" << count << endl;

   return 0;
}