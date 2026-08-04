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

   int maxDepht(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = maxDepht(root->left);
    int right = maxDepht(root->right);

    return 1+max(left,right);
   }




int main()
{
  Node* root = new Node(3);
  root->left = new Node(9);
  root->right = new Node(20);
  root->right->left = new Node(15);
  root->right->right = new Node(7);
  
  cout << maxDepht(root);




   return 0;
}