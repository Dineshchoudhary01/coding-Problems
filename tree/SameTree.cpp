#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;

    Node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

bool isSameTree(Node* p, Node* q){
    if(p == NULL && q == NULL){
        return true;
    }

    if((p->val == q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right)){
        return true;
    }

    return false;
}


int main()
{

    Node* p = new Node(1);
    Node* q = new Node(1);

    p->left = new Node(2);
    p->right = new Node(4);

    q->left = new Node(2);
    q->right = new Node(3);

    bool result = isSameTree(p,q);
    cout << result;
   return 0;
}