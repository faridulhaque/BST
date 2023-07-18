#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;

    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};


Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;

        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;
        
        if (left != NULL)
            q.push(left);

        if (right != NULL)
            q.push(right);
    }

    return root;
}



void insert(Node * &root, int x){

    if(root == NULL) {
        root = new Node(x);  
        return;
    }
    
    if(x < root->value){
        if(root == NULL){
            root->left = new Node(x);
        }
        else{
            insert(root->right, x);
        }
    }

    else{
        insert(root->left, x);
    }
}


int main()
{

    Node *root = input_tree();
    int x = 10;
    insert(root, x);

    return 0;
}