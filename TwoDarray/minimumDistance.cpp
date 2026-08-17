#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> shops = {
        {0,0,5},
        {3,3,5},
        {2,1,3}
    };

    vector<int> customer = {2,2};
    int bestdistance = INT_MAX;
    int answer = -1;

  for(int i=0; i<shops.size(); i++){
    int x = shops[i][0];
    int y = shops[i][1];
    int range = shops[i][2];

    int distance = abs(x - customer[0]) + abs(y - customer[1]);

    if(distance <=range && distance < bestdistance){
        bestdistance = distance;
        answer = i;
    }
  }

  cout << answer << endl;






   return 0;
}