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

int rootDistance(Node *root, int n){
    if(n == root->data)
        return 0;
    else if(n < root->data)
        return 1 + rootDistance(root->left, n);
    else
        return 1 + rootDistance(root->right, n);
}

int main() {
    int n, a, b;

    cin >> n >> a >> b;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *root = insertNode(arr, root, 0, n);

    preOrder(root);

    cout << endl;

    postOrder(root);

    return 0;
}
