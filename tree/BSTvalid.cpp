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

bool isValidBST(Node* root){
     if(root==NULL){
        return true;
     }

     if(root->left->val < root->val && root->right->val > root->val){
        return true;
     }
     return isValidBST(root->left) && isValidBST(root->right);
}

int main()
{
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    bool result = isValidBST(root);
    cout << result;
   return 0;
}