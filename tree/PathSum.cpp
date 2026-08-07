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

bool pathSum(Node* root, int targetSum){
  if(root == NULL){
    return false;
  }
  if(root->left==NULL && root->right==NULL && targetSum-root->val==0) return true;

  return pathSum(root->left,targetSum-root->val) || pathSum(root->right,targetSum-root->val);
}

int main()
{

    Node* root = new Node(5);

    root->right = new Node(8);
    root->right->left = new Node(13);
    root->right->right = new Node(4);
    root->right->right->right = new Node(1);

    root->left = new Node(4);
    root->left->left = new Node(11);
    root->left->left->left = new Node(7);
    root->left->left->right = new Node(2);

   int targetSum = 22;
 
   bool result = pathSum(root,targetSum);

   cout << result;




   return 0;
}