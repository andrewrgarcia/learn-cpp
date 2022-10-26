// C++ program to reverse
// alternate levels of a tree
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char key;
    Node *left, *right;
};

void preorder(struct Node *root1, struct Node *root2, int lvl)
{
    // Base cases
    if (root1 == NULL || root2 == NULL)
        return;

    // Swap subtrees if level is even
    if (lvl % 2 == 0)
        swap(root1->key, root2->key);

    // Recur for left and right
    // subtrees (Note : left of root1
    // is passed and right of root2 in
    // first call and opposite
    // in second call.
    preorder(root1->left, root2->right, lvl + 1);
    preorder(root1->right, root2->left, lvl + 1);
}

// This function calls preorder()
// for left and right children
// of root
void reverseAlternate(struct Node *root)
{
    preorder(root->left, root->right, 0);
}

// Inorder traversal (used to print initial and
// modified trees)
void printInorder(struct Node *root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    cout << root->key << " ";
    printInorder(root->right);
}

// A utility function to create a new node
Node *newNode(int key)
{
    Node *temp = new Node;
    temp->left = temp->right = NULL;
    temp->key = key;
    return temp;
}

// Driver program to test above functions
int main()
{
    struct Node *root = newNode('a');
    root->left = newNode('b');
    root->right = newNode('c');
    root->left->left = newNode('d');
    root->left->right = newNode('e');
    root->right->left = newNode('f');
    root->right->right = newNode('g');
    root->left->left->left = newNode('h');
    root->left->left->right = newNode('i');
    root->left->right->left = newNode('j');
    root->left->right->right = newNode('k');
    root->right->left->left = newNode('l');
    root->right->left->right = newNode('m');
    root->right->right->left = newNode('n');
    root->right->right->right = newNode('o');

    cout << "Inorder Traversal of given tree\n";
    printInorder(root);

    reverseAlternate(root);

    cout << "\n\nInorder Traversal of modified tree\n";
    printInorder(root);
    return 0;
}
