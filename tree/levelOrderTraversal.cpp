#include<bits/stdc++.h>
using namespace std;

struct Node{
   int val;
   Node* left;
   Node* right;


   Node(int x){
    val = x;
    left = NULL;
    right = NULL;
   }
};


vector<vector<int>> levelOrder(Node* root){
   vector<vector<int>> ans;
   if(root == NULL){
    return ans;
   }

   queue<Node*> q;
   q.push(root);

   while(!q.empty()){
      int size = q.size();
      vector<int> level;

      for(int i=0; i<size; i++){
        Node* node = q.front();
        q.pop();

        level.push_back(node->val);

        if(node->left != nullptr){
            q.push(node->left);
        }
        if(node->right != nullptr){
            q.push(node->right);
        }
      }
      ans.push_back(level);
   }
   return ans;

}

int main()
{
    Node* root = new Node(3);

    root->left = new Node(9);

    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

   vector<vector<int>> ans = levelOrder(root);

   for(auto level : ans){
    for(auto x: level){
      cout << x << " ";
    }
    cout << endl;
   }

   return 0;
}