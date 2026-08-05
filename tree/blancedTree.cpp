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

  int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int lefth = height(root->left);
    if(lefth == -1) return -1;
    int righth = height(root->right);
    if(righth == -1) return -1;

    if(abs(lefth - righth) > 1) return -1;

    return 1+ max(lefth,righth);
  }



bool isBlanced(Node* root){
   return height(root) != -1;
}



int main()
{

Node* root = new Node(3);

root->left = new Node(9);

root->right = new Node(20);
root->right->left = new Node(15);
root->right->right = new Node(7);

 bool result = isBlanced(root);
 cout << result;



   return 0;
}