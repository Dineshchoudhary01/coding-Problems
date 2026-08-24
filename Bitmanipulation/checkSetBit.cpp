#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n = 13;
  string binary = "";

  while(n > 0){
    binary = to_string(n%2) + binary;
    n = n/2;
  }

  int count = 0;
  int length = binary.length();
  for(int i=0; i<length; i++){
    if(binary[i] == '1'){
        count++;
    }
  }
 cout << count << endl;





   return 0;
}