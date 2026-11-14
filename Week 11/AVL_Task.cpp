
#include <iostream>
using namespace std;
//Module 1 Structure  
struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
};
//Module 2 Create Node
BSTNode* CreateNode(int data) {
    BSTNode* n = new BSTNode;

    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}
//Module 3 Insert Node
BSTNode* Insert(BSTNode* root, int data) {

    if (root == NULL) {
        return CreateNode(data);
    }

    if (data < root->data) {
        root->left = Insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = Insert(root->right, data);
    }

    return root;
}
//Module 4 Find Minimum Node
BSTNode* FindMin(BSTNode* root) {

    if (root == NULL)
        return NULL;

    while (root->left != NULL) {
        root = root->left;
    }

    return root;
}
//Module 5 Delete Node
BSTNode* Delete(BSTNode* root, int data)
{
    if (root == NULL)
        return NULL;

    // Search Left
    if (data < root->data)
        root->left = Delete(root->left, data);

    // Search Right
    else if (data > root->data)
        root->right = Delete(root->right, data);

    else
    {
        // Case 1: No Child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // Case 2: Only Right Child
        else if (root->left == NULL)
        {
            BSTNode* temp = root->right;
            delete root;
            return temp;
        }

        // Case 3: Only Left Child
        else if (root->right == NULL)
        {
            BSTNode* temp = root->left;
            delete root;
            return temp;
        }

        // Case 4: Two Children
        else
        {
            BSTNode* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }

    return root;
}

//Module 6 Inorder Traversal
void Inorder(BSTNode* root)
{
    if (root == NULL)
        return;

    Inorder(root->left);

    cout << root->data << " ";

    Inorder(root->right);
}
//Module 7 Preorder Traversal
void Preorder(BSTNode* root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";

    Preorder(root->left);

    Preorder(root->right);
}
//Module 8 Postorder Traversal
void Postorder(BSTNode* root)
{
    if (root == NULL)
        return;

    Postorder(root->left);

    Postorder(root->right);

    cout << root->data << " ";
}
//Module 9 User Input
void UserInput(BSTNode*& root)
{
    int n, value;

    cout << "Enter how many nodes? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> value;

        root = Insert(root, value);
    }
}
// Module 10 Main Function
int main()
{
    BSTNode* root = NULL;
    int value;

    UserInput(root);

    cout << "Inorder: "<<endl;
    Inorder(root);
    cout << endl;

    cout << "Preorder: "<<endl;
    Preorder(root);
    cout << endl;

    cout << "Postorder: "<<endl;
    Postorder(root);
    cout << endl;

    cout << "Enter value to delete: "<<endl;
    cin >> value;

    root = Delete(root, value);

    cout << "After Delete (Inorder): "<<endl;
    Inorder(root);
    cout << endl;

    cout << "After Delete (Preorder): "<<endl;
    Preorder(root);
    cout << endl;

    cout << "After Delete (Postorder): "<<endl;
    Postorder(root);
    cout << endl;

    return 0;
}