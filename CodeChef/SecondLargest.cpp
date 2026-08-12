#include<bits/stdc++.h>
using namespace std;
int main()
{

  vector<int> arr = {10,5,20,8,20};
   int n = arr.size();
  sort(arr.begin(),arr.end());

  int largest = arr[n-1];

  for(int i=n-2; i>=0; i--){
    if(arr[i] != largest){
        cout << arr[i];
        break;
    }
  }






   return 0;
}