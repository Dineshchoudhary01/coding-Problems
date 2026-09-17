#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4};
    int k = 2;
   
    int missingNumber = 0;
    int num = 1;

    while(true){
        bool found = false;

        for(int i=0; i<arr.size(); i++){
            if(arr[i] == num){
                found = true;
                break;
            }
        }

      if(!found){
        missingNumber++;

        if(missingNumber == k){
            cout << num ;
        }

      }
       num++;

    }







   return 0;
}