#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class BST{
public:
    Node* root;

    BST()
    {
        root = NULL;
    }

    Node* Insert(Node* r, int item)
    {
        if (r == NULL)
        {
            Node* newnode = new Node(item);
            return newnode;
        }
        else if (item < r->data)
            r->left = Insert(r->left, item);
        else
            r->right = Insert(r->right, item);

        return r;
    }

    void preorder(Node* r)
    {
        if (r == NULL)
            return;
        cout << r->data << " ";
        preorder(r->left);
        preorder(r->right);
    }

    void preorder()
    {
        preorder(root);
    }

    void inOrder(Node* r)
    {
        if (r == NULL)
            return;
        inOrder(r->left);
        cout << r->data << " ";
        inOrder(r->right);
    }

    void postorder(Node* r)
    {
        if (r == NULL)
            return;
        postorder(r->left);
        postorder(r->right);
        cout << r->data << " ";
    }

    Node* search(Node* r, int item)
    {
        if (r == NULL || r->data == item)
            return r;

        if (item < r->data)
            return search(r->left, item);
        else
            return search(r->right, item);
    }

    Node* findMax(Node* r)
    {
        if (r == NULL)
            return NULL;
        while (r->right != NULL)
            r = r->right;
        return r;
    }

    Node* findMin(Node* r)
    {
        if (r == NULL)
            return NULL;
        while (r->left != NULL)
            r = r->left;
        return r;
    }
};