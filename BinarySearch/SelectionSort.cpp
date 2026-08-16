#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int smallestIndex = i;
        for(int j=i+1; j<n; j++){
          if(arr[j] < arr[smallestIndex]){
            smallestIndex = j;
          }
        }
         swap(arr[i], arr[smallestIndex]);
    }

    for(int ch : arr){
        cout << ch << endl;
    }
   
   return 0;
}