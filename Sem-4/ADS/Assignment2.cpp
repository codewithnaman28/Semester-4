#include <iostream>
#include <cstring>
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
        treenode *root; // createing a variable 

public:
        tree();
        void create_r();
        void create_r(treenode *);
        void display(treenode *);
        treenode *get_root() { return root; }
};

tree::tree() // constructor
{
        root = NULL;
}

void tree::create_r()
{
        // Driver for creation
        root = new treenode;
        cout << "Enter data: \n";
        cin >> root->data;
        create_r(root);
}

void tree::create_r(treenode *node)
{
        // Pseudo code for creating left and right subtrees
        char ch;
        cout << "Do you want to create a left subtree for " << node->data << " (y/n)?";
        cin >> ch;
        if (ch == 'y')
        {
                node->left = new treenode;
                cout << "Enter data for left subtree: \n";
                cin >> node->left->data;
                create_r(node->left);
        }
        cout << "Do you want to create a right subtree for" << node->data << "(y/n)? \n";
        cin >> ch;
        if (ch == 'y')
        {
                node->right = new treenode;
                cout << "Enter data for right subtree: \n"
                     << node->data << "Y/N \n";
                cin >> node->right->data;
                create_r(node->right);
        }
}

void tree::display(treenode *node)
{
        if (node != NULL)
        {
                display(node->left);
                cout << node->data << " ";
                display(node->right);
        }
}

int main()
{
        tree bt;
        bt.create_r();
        bt.display(bt.get_root());
        return 0;
}
