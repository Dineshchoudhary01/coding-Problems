#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int count = 0;
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            int age;
            cin >> age;
            if(age>=10 && age<=60){
                count++;
            }
        }
        cout << count << endl;
    }
   return 0;
}