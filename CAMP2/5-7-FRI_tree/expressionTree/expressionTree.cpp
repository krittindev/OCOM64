#include <bits/stdc++.h>
using namespace std;

struct Node {
    int num;
    char oprt;
    Node *left, *right;
};

Node* newNode(string str) {
    Node* node = (Node*)malloc(sizeof(Node));

    if(isdigit(str[str.size()-1]))
        if(stoi(str) == -1)
            return NULL;
        else
            node->num = stoi(str);
    else
        node->oprt = str[0];

    node->left = node->right = NULL;
    return (node);
}

Node *insertNode(string str[], Node *root, int i, int n) {


    if (i < n) {

        //cout << i << ' ' << str[i] << endl;

        Node *temp = newNode(str[i]);

        if(temp == NULL)
            return root;

        root = temp;

        root->left = insertNode(str, root->left, 2*i+1, n);

        root->right = insertNode(str, root->right, 2*i+2, n);
    }
    return root;
}

int operate(Node *root) {

    if(root->left == NULL && root->right == NULL)
        return root->num;
    else
        switch(root->oprt){
            case '+':
                return operate(root->left) + operate(root->right);
            case '-':
                return operate(root->left) - operate(root->right);
            case '*':
                return operate(root->left) * operate(root->right);
            case '/':
                return operate(root->left) / operate(root->right);
            case '^':
                return pow(operate(root->left), operate(root->right));
        }
}

int main() {
    int n;

    cin >> n;

    string str[n];

    for (int i = 0; i < n; i++)
        cin >> str[i];

    Node *root = insertNode(str, root, 0, n);

    cout << operate(root);

    return 0;
}

