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
    if (i < n && arr[i] != -1) {
        Node *temp = newNode(arr[i]);
        root = temp;

        root->left = insertNode(arr, root->left, 2*i+1, n);

        root->right = insertNode(arr, root->right, 2*i+2, n);
    }
    return root;
}

void travel(Node *root) {
    if (root != NULL) {
        if(root->left == NULL && root->right == NULL)
            cout << root->data <<" ";

        travel(root->left);
        travel(root->right);
    }
}

int main() {
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *root = insertNode(arr, root, 0, n);

    travel(root);

    return 0;
}
