
#include <iostream>
using namespace std;

// Module 1: Structure

struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};
// Module 2: Create Node
BSTNode* createNode(int value)
{
    BSTNode* n = new BSTNode;
    n->data = value;  
    n->left = NULL;
    n->right = NULL;
    return n;
}
// Module 3: Insert Node 
BSTNode* insert(BSTNode* root, int value)
{
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}


//  Module 4 :Search 
bool search(BSTNode* root, int value)
{
    if (root == NULL)
        return false;

    if (root->data == value)
        return true;

    if (value < root->data)
        return search(root->left, value);

    return search(root->right, value);
}

//  Module 5: Inorder Traversal
void inorder(BSTNode* root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//  Module 6:Preorder Traversal
void preorder(BSTNode* root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//  Module 7:Postorder Traversal
void postorder(BSTNode* root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

//  Module 8: Find Minimum
BSTNode* findMin(BSTNode* root)
{
    if (root == NULL || root->left == NULL)
        return root;

    return findMin(root->left);
}

// Module 9: Find Maximum
BSTNode* findMax(BSTNode* root)
{
    if (root == NULL || root->right == NULL)
        return root;

    return findMax(root->right);
}

// Module 10:  Calculate Height
int height(BSTNode* root)
{
    if (root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return 1 + (left > right ? left : right);
}

// Module 11 :Count Total Nodes
int countNodes(BSTNode* root)
{
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left)
         + countNodes(root->right);
}

//  Module 12: Count Leaf Nodes
int countLeafNodes(BSTNode* root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeafNodes(root->left)
         + countLeafNodes(root->right);
}

// Module 13: Main Function and Menu

int main()
{
    BSTNode* root = NULL;

    int values[] = {64, 29, 83, 17, 40, 72, 96};

    for (int i = 0; i < 7; i++)
        root = insert(root, values[i]);

    int choice, value;

    do
    {
        cout << "\n--- BST MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Inorder\n";
        cout << "4. Preorder\n";
        cout << "5. Postorder\n";
        cout << "6. Minimum\n";
        cout << "7. Maximum\n";
        cout << "8. Height\n";
        cout << "9. Total Nodes\n";
        cout << "10. Leaf Nodes\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            root = insert(root, value);
            cout << "Inserted\n";
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            cout << (search(root, value) ? "Found" : "Not Found");
            cout << endl;
            break;

        case 3:
            inorder(root);
            cout << endl;
            break;

        case 4:
            preorder(root);
            cout << endl;
            break;

        case 5:
            postorder(root);
            cout << endl;
            break;

        case 6:
            if (root != NULL)
                cout << "Min: " << findMin(root)->data << endl;
            else
                cout << "Tree is empty\n";
            break;

        case 7:
            if (root != NULL)
                cout << "Max: " << findMax(root)->data << endl;
            else
                cout << "Tree is empty\n";
            break;

        case 8:
            cout << "Height: " << height(root) << endl;
            break;

        case 9:
            cout << "Total: " << countNodes(root) << endl;
            break;

        case 10:
            cout << "Leaf Nodes: " << countLeafNodes(root) << endl;
            break;

        case 0:
            cout << "Program Ended\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 0);

    return 0;
}
