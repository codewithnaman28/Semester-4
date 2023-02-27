#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class wordnode
{
    char data[10];
    wordnode *left;
    wordnode *right;
    friend class tree;
};

class word
{
    wordnode *root;
};

do
{
    temp = root;
    flag = 0;
    wordnode *curr_node = new wordnode;
    cout << "Enter the word: ";
    cin >> curr_node->data;

    while (flag == 0)
    {
        if (curr->data < temp->data)
        {
            temp->left = curr_node;
            flag = 1;
        }
        else
        {
            temp->left;
        }

        else
        {
            if (temp->right = NULL)
            {
                temp->right = curr;
                flag = 1;
            }
            else
            {
                temp->right = curr_node;
            }
        }
    }
    cout <<
}