/*
TEST CASES:
left skewed
right skewed
complete
full
noraml
*/

#include <iostream>
using namespace std;

class treenode
{
    char data[10];
    treenode *left;
    treenode *right;
    friend class tree;
};

class tree
{
    treenode *root;

public:
    tree();
    void create_r();
    void create_r(treenode *);
    void inorder_r(treenode *);
    void inorder();
    void postorder();
    void postorder_r(treenode *);
    void preorder();
    void preorder_r(treenode *);
    void inorder_nr();
    void postorder_nr();
    void preorder_nr();
};

class stack
{
    int top;
    treenode *data[30];

public:
    stack()
    {
        top = -1;
    }
    void push(treenode *temp);
    treenode *pop();
    int isempty();
    friend class tree;
};

void stack::push(treenode *temp)
{
    top++;
    data[top] = temp;
}

treenode *stack::pop()
{
    return data[top--];
}
int stack::isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void tree::create_r()
{
    root = new treenode; // new allocate memory
    cout << "Enter data" << endl;
    cin >> root->data;
    root->left = NULL;
    root->right = NULL;
    create_r(root);
}

void tree::create_r(treenode *temp)
{
    treenode *curr;
    int ch;
    cout << "For node " << temp->data << " add left child , enter choice 1.yes 2.no" << endl;
    cin >> ch;
    if (ch == 1)
    {
        curr = new treenode;
        cout << "enter data" << endl;
        cin >> curr->data;
        curr->left = NULL;
        curr->right = NULL;
        temp->left = curr;
        create_r(curr);
    }
    cout << "For node " << temp->data << " add right child , enter choice 1.yes 2.no" << endl;
    cin >> ch;
    if (ch == 1)
    {
        curr = new treenode;
        cout << "enter data" << endl;
        cin >> curr->data;
        curr->left = NULL;
        curr->right = NULL;
        temp->right = curr;
        create_r(curr);
    }
}

// INORDER
void tree::inorder()
{
    inorder_r(root);
}

void tree::inorder_r(treenode *temp)
{
    if (temp != NULL)
    {
        inorder_r(temp->left);
        cout << temp->data << endl;
        inorder_r(temp->right);
    }
}

void tree::inorder_nr()
{
    treenode *temp;
    temp = root;
    stack st;
    while (1)
    {
        while (temp != NULL)
        {
            st.push(temp);
            temp = temp->left;
        }

        if (st.isempty() == 1)
            break;
        temp = st.pop();
        cout << temp->data << endl;
        temp = temp->right;
    }
}
// POSTORDER
void tree::postorder()
{
    postorder_r(root);
}

void tree::postorder_r(treenode *temp)
{
    if (temp != NULL)
    {
        postorder_r(temp->left);
        postorder_r(temp->right);
        cout << temp->data << endl;
    }
}

void tree::postorder_nr()
{
    treenode *temp;
    temp = root;
    stack st;
    while (1)
    {
        while (temp != NULL)
        {
            st.push(temp);
            temp = temp->left;
        }
        if (st.data[st.top]->right == NULL)
        {
            temp = st.pop();
            cout << temp->data << endl;
        }
        while (st.isempty() == 0 && st.data[st.top]->right == temp)
        {
            temp = st.pop();
            cout << temp->data;
        }
        if (st.isempty() == 1)
            break;
        temp = st.data[st.top]->right;
    }
}

// PREORDER
void tree::preorder()
{
    preorder_r(root);
}

void tree::preorder_r(treenode *temp)
{
    if (temp != NULL)
    {
        cout << temp->data << endl;
        preorder_r(temp->left);
        preorder_r(temp->right);
    }
}

void tree::preorder_nr()
{
    treenode *temp;
    temp = root;
    stack st;
    while (1)
    {
        while (temp != NULL)
        {
            cout << temp->data << endl;
            st.push(temp);
            temp = temp->left;
        }

        if (st.isempty() == 1)
            break;
        temp = st.pop();
        temp = temp->right;
    }
}

tree::tree()
{
    root = NULL;
}

// DRIVER CODE
int main()
{
    tree bt = new tree();
    int ch;
    cout << "\nEnter the operation to be performed\n1. Inorder\n 2. Postorder\n3. Preorder\n4.Non Recursive Inorder\n5. Non Recursive Preorder\n6. Non Recursive Postorder\n7. Quit" << endl;
    cin >> ch;

    switch (ch)
    {
        case 1:
            cout  << "The inorder is: " << endl;
            cout << bt.inorder() << endl;
            break;

        case 2:
        cout<< "The postorder is: " << endl;
            cout << bt.postorder() << endl;
            break;
        

        case 3:
            cout<< "The preorder is: " << endl;
            cout << bt.preorder() << endl;
            break;

        case 4:
            cout << "The non recursive inorder is: " << endl;
            cout << bt.inorder_nr() << endl;
        
            break;

        case 5:
            cout<< "The non recursive preorder is: " << endl;
            cout << bt.preorder_nr() << endl;
        
            break;

        case 6:
            cout<< "The non recursive postorder is: " << endl;
            cout << bt.postorder_nr() << endl;
        
            break;

        case 7:
            break;

        default:
            break;
        }
        return 0;
}
