#include <iostream>
using namespace std;

class tbtnode
{
public:
	char data;
	bool rbit;
	bool lbit;
	tbtnode *rightc;
	tbtnode *leftc;
	friend class tbt;
	tbtnode();
};

tbtnode::tbtnode()
{
	lbit = 1;
	rbit = 1;
};

class tbt
{
	tbtnode *head;

public:
	void create();
	void preorder();
	tbtnode *presuccr(tbtnode *temp);
	void inorder();
	tbtnode *insuccr(tbtnode *temp);
	tbt();
};

tbt::tbt()
{
	tbtnode *head = new tbtnode();
	head->leftc = head;
	head->rightc = head;
	head->lbit = 0;
	head->rbit = 0;
};

void tbt::create()
{

	tbtnode *root = new tbtnode();
	cout << "Enter the data: ";
	cin >> root->data;
	head->lbit = 0;
	root->leftc = head;
	root->rightc = head;
	head->leftc = root;
	string choice;

	do
	{
		int flag = 0;
		tbtnode *temp = root;
		tbtnode *curr = new tbtnode();
		cout << "Enter the data: ";
		cin >> curr->data;
		char ch;

		while (flag == 0)
		{
			cout << "Enter 1 for left and 2 for right: ";
			cin >> ch;

			if (ch == 'l')
			{
				if (temp->lbit == 1)
				{
					curr->rightc = temp;
					curr->leftc = temp->leftc;
					temp->leftc = curr;
					temp->lbit = 0;
					flag = 1;
				}
				else
				{
					temp = temp->leftc;
				}
			}
			if (ch == 'r')
			{
				if (temp->rbit == 1)
				{
					curr->leftc = temp;
					curr->rightc = temp->rightc;
					temp->rightc = curr;
					temp->rbit = 0;
					flag = 1;
				}
				else
				{
					temp = temp->rightc;
				}
			}
		}
	} while (choice == 'yes');
}

void tbt::inorder()
{
	tbtnode *temp = head->leftc;
	while (temp->lbit == 0)
	{
		temp = temp->leftc;
	}
	while (temp != head)
	{
		cout << temp->data << " ";
		temp = insuccr(temp);
	}
}

void tbt::preorder()
{
	tbtnode *temp = head->rightc;
	while (temp->lbit == 0)
	{
		temp = temp->rightc;
	}
	while (temp != head)
	{
		cout << temp->data << " ";
		temp = insuccr(temp);
	}
}