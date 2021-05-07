#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node *newNode(int key) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = key;
    node->left = node->right = NULL;
    return node;
}

Node *insertNode(Node *node, int data) {
    if (node == NULL)
        return newNode(data);

    if (data < node->data)
        node->left = insertNode(node->left, data);
    else
        node->right = insertNode(node->right, data);

    return node;
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);

        cout << root->data << " ";

        inorder(root->right);
    }
}

int main() {
    int n, temp;

    cin >> n;

    Node *root = NULL;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        root = insertNode(root, temp);
    }

    inorder(root);

    return 0;
}
