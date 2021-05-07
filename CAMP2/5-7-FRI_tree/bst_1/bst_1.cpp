#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
};

Node *newNode(int item) {
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);

        cout << root->key << " ";

        inorder(root->right);
    }
}

Node *insert(Node *Node, int key) {
    if (Node == NULL) return newNode(key);

    if (key < Node->key)
        Node->left = insert(Node->left, key);
    else
        Node->right = insert(Node->right, key);

    return Node;
}

int main() {
    int n, temp;

    cin >> n;

    Node *root = NULL;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        root = insert(root, temp);
    }

    inorder(root);

    return 0;
}
