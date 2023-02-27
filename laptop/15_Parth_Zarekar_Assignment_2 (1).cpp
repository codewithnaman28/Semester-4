#include <iostream>
using namespace std;
class treenode {
	public : 
	string data;
    treenode *left;
    treenode *right;
    friend class tree;
};
class stack{
	int top;
	treenode *data [30];
	public:
	stack()
	{
		top=-1;
	}
	void push (treenode *temp)
	{
		top++;
		data[top] = temp;
	}
	treenode*pop()
	{
		return data[top--];
	}
	int isempty(){
		if (top == -1)
		{
			return 1;
		}
		else 
		{
			return 0;
		}
	}
	friend class tree;
};

class tree {
	public:
	treenode *root;
	tree(){
		root = NULL;
	}
	void create_r()
	{
		root = new treenode;
		cout<<"Enter ROOT Data:"<<endl;
		cin>>root->data;
		root->left = NULL;
		root->right = NULL;
		create_r(root);
	}

	void create_r(treenode * temp){
		char choice1, choice2;
		cout << "Enter whether you want to add the data to the left of \""<< temp->data <<"\" or not (y/n): ";
		cin >> choice1;
		if (choice1 == 'y'){
			treenode *curr1 = new treenode();
			cout << "Enter the data for the left of \""<< temp->data << "\" node: ";
			cin >> curr1 -> data;
			temp -> left = curr1;
			create_r(curr1);
		}
		cout << "Enter whether you want to add the data to the right of \""<<temp->data<<"\" or not (y/n): ";
		cin >> choice2;
		if (choice2 == 'y'){
			treenode *curr2 = new treenode();
			cout << "Enter the data for the Right of \""<< temp->data <<"\" node:";
			cin >> curr2 -> data;
			temp -> right = curr2;
			create_r(curr2);

		}
	}
	//inorder recursive
	void inorder_traversal_r (treenode * node){
		if (node == NULL){
			return;
		}
		inorder_traversal_r(node->left);
		cout << node->data << "\n";
		inorder_traversal_r(node->right);
	}
	//preorder recursive
	void preorder_traversal_r(treenode* temp)
	{
		if (temp!= NULL)
		{
			cout<< temp->data << endl;
			preorder_traversal_r(temp->left);
			preorder_traversal_r(temp->right);
		}
	}
	// postorder recursive
	void postorder_traversal_r(treenode*temp)
	{
		if(temp!=NULL)
		{
			postorder_traversal_r(temp->left);
			postorder_traversal_r(temp->right);
			cout<<temp->data<<endl;
		}
	}
	//Inorder Non recursive
	void inorder_traversal_non_recursive(treenode*temp)
	{
		temp =root;
		stack st;
		while (1)
		{
			while(temp!=NULL)
			{
				st.push(temp);
				temp = temp->left;
			}
			if(st.isempty()==1)
			{
				break;
			}
			temp=st.pop();
			cout<< temp->data<<endl;
			temp = temp->right;
		}
	}

	//Postorder non recursive
	void postorder_traversal_non_recursive(treenode*temp)
	{
		temp = root;
		stack st;
		while(1)
		{
			while(temp!=NULL)
			{
				st.push(temp);
				temp = temp->left;
			}
			if (st.data[st.top]->right == NULL)
			{
				temp=st.pop();
				cout<<temp->data<<endl;
			}
			while(st.isempty()==0 && st.data[st.top]->right==temp)
			{
				temp=st.pop();
				cout<<temp->data;
			}
			if (st.isempty()==1)
			{
				break;
			}
			temp = st.data[st.top]->right;
		}
	}

	//Preorder Non recursive
	void preorder_traversal_non_recursive(treenode*temp)
	{
		temp = root;
		stack st;
		while(1)
		{
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;
				st.push(temp);
				temp =temp->left;
			}
			if(st.isempty()==1)
			{
				break;
			}
			temp=st.pop();
			temp = temp->right;
		}
	}
};
/*Test cases
1. left skewed 
2. Right skewed
3. Complete Tree
4. Full tree
5. Normal Tree
6. Binary search Tree
*/
int main() {
	tree bt;
	// treenode * root = new treenode();
	// cout << "Enter the data for the root node: ";
	// cin >> root -> data;
	int ch;
	char c;
	do {

	cout<<"\nWhat you want to do:\n1.Enter Tree\n2.Inorder Recursive\n3.Preorder Recursive\n4.Postorder Recursive\n5.Inorder Non Recursive\n6.Preorder Non Recursive\n7.Postorder Non Recursive\nchoose:"<<endl;
	cin>>ch;
	switch (ch)
	{
		case 1:
				bt.create_r();
				break;
		case 2:
				cout << "The inorder display of the tree is: " << endl;	
				bt.inorder_traversal_r(bt.root);
			break;
		case 3:
				cout<<"The preorder display of the tree is:" << endl;
				bt.preorder_traversal_r(bt.root);
			break;
		case 4:
				cout<<"The postorder display of the tree is:"<<endl;
				bt.postorder_traversal_r(bt.root);
				break;
		case 5:
				cout<<"The Inorder Non Recursive Display of the tree is:"<<endl;
				bt.inorder_traversal_non_recursive(bt.root);
				break;
		case 6: 
				cout<<"The Preorder Non Recursive Display of the tree is:"<<endl;
				bt.preorder_traversal_non_recursive(bt.root);
				break;
		case 7:
				cout<<"The Postorder Non Recursive Display of the tree is:"<<endl;
				bt.postorder_traversal_non_recursive(bt.root);
				break;
		default:
				cout<<"Invalid choice";
			break;
		}

		cout << "Do you want to continue(y/n):";
		cin>> c;
	}while (c == 'y');

	
	return 0;
}