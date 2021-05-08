#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* newNode(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = key;
    node->left = node->right = NULL;
    return (node);
}

Node *insertNode(int arr[], Node *root, int i, int n) {
    if (i < n) {
        Node *temp = newNode(arr[i]);
        root = temp;

        root->left = insertNode(arr, root->left, 2*i+1, n);

        root->right = insertNode(arr, root->right, 2*i+2, n);
    }
    return root;
}

void preOrder(Node *root) {
    if (root != NULL) {
        cout << root->data <<" ";

        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node *root) {
    if (root != NULL) {
        inOrder(root->left);

        cout << root->data <<" ";

        inOrder(root->right);
    }
}


void postOrder(Node *root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);

        cout << root->data <<" ";
    }
}

int main() {
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *root = insertNode(arr, root, 0, n);

    preOrder(root);

    cout << endl;

    postOrder(root);

    return 0;
}
