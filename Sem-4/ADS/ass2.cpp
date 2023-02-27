/*
TEST CASES:
left skewed
right skewed
complete
full
normal
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

int main()
{
    tree bt;
    bt.create_r();
    cout << "The inorder display of the tree is: " << endl;
    bt.inorder();
    cout << "The postorder display of the tree is: " << endl;
    bt.postorder();
    cout << "The preorder display of the tree is: " << endl;
    bt.preorder();
    cout << "non recursive inorder : " << endl;
    bt.inorder_nr();
    cout << "Non Recursive preorder : " << endl;
    bt.preorder_nr();
    cout << "non recursive postorder :" << endl;
    bt.postorder_nr();
}