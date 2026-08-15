#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin >> t;
    while(t--){
        int x,y,d;
        cin >> x>>y>>d;
        int z = abs(x-y);
        if(z <= d){
            cout << "yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

   return 0;
}