#include  < iostream>
#include <string.h>
#include <stack>
#include <queue>
using namespace std;

class treenode 
{
	        public :  
         string key;
	    string definition;
	    treenode *left;
	    treenode *right;
	    friend class Binary_search_tree;
};

class Binary_search_tree 
{
	        public : 
         treenode *root;
	        Binary_search_tree()
	{
		                root = NULL;
		        
	}
	         
  
         void create () 
     
	{
		        treenode *temp , *curr;
		        int ch = 0;
		        bool flag = false;
		        root = new treenode;
		        cout << "Enter The Root word:" << endl;
		        cin >> root->key;
		        cout << "Enter Definition of word:" << endl;
		        cin >> root->definition;
		                cout << "Do you want to add more words(1/0):";
		                cin >> ch;
		        while (ch == 1) 
                 
		{
			            temp = root;
			            flag = false;
			            curr = new treenode;
			            cout << "Enter The Word:" << endl;
			            cin >> curr->key;
			            cout << "Enter Definition of word:" << endl;
			            cin >> curr->definition;
			            while (flag == false) 
             
			{
				                if  (strcmp(curr->key.c_str(), temp->key.c_str()) < 0) 
                 
				{
					                    if  (temp->left == NULL) 
                     
					{
						                        temp->left = curr;
						                        flag = true;
						                    
					}
					                    else   
                     
					{
						                        temp = temp->left;
						                    
					}
					                
				}
				                else  
				{
					                    if  (temp->right == NULL) 
                     
					{
						                        temp->right = curr;
						                        flag = true;
						                    
					}
					                    else   
                     
					{
						                        temp = temp->right;
						                    
					}
					                
				}
				            
			}
			            cout << "Do Your want to add more words?(1/0)" << endl;
			            cin >> ch;
			                
		}
		                 
      
     
	}
	         //breadth first search. 
         void BFS () 
         
	{
		         
                 treenode * temp;
		                queue <treenode *> que;
		                temp = root;
		                que.push(temp);
		                while (!que.empty()) 
                 
		{
			                        temp = que.front();
			                        que.pop();
			                         // cout<<"---------------"<<endl; 
                         cout << temp->key << " : " << temp->definition << endl;
			                         // cout<<"---------------"<<endl; 
                         if  (temp->left != NULL) 
                         
			{
				                                que.push(temp->left);
				                        
			}
			                        if  (temp->right != NULL) 
                         
			{
				                                que.push(temp->right);
				                        
			}
			                
		}
		        
	}

	        treenode * copy_bst_recursive(treenode * temp) 
         
	{

		                if  (temp == NULL) 
                 
		{
			                        return NULL;
			                
		}
		                else                 
		{
			                treenode * t2 = NULL;
			                        t2->key = temp->key;
			                        t2->definition = temp->definition;
			                        t2->left = copy_bst_recursive(temp->left);
			                        t2->right = copy_bst_recursive(temp->right);
			                        return t2;
			                
		}
		                 
         
	}

	         // mirror non recursive 
         void mirror_BST() 
         
	{
		                treenode * temp_var_for_swapping;
		                queue <treenode *> que;
		                treenode *temp = root;
		                que.push(temp);
		                while (!que.empty()) 
                 
		{
			                        temp = que.front();
			                        que.pop();
			                         //swapping. 
                          // swap(temp->left,temp->right); 
                         temp_var_for_swapping = temp->left;
			                        temp->left = temp->right;
			                        temp->right = temp_var_for_swapping;

			                        if  (temp->left != NULL) 
                         
			{
				                                que.push(temp->left);
				                        
			}
			                        if  (temp->right != NULL) 
                         
			{
				                                que.push(temp->right);
				                        
			}
			                
		}
		                 // return temp; 
                  // BFS(); 
         
	}

	         //delete node 
         void delete_node() 
         
	{
		                string word;
		                cout << "Enter word to be deleted:";
		                cin >> word;
		                treenode * curr = root;
		                treenode * temp , *s;
		                int side;
		                treenode * parent;
		                bool flag = false;
		                while (flag = false) 
                 
		{
			                        if  (word < curr->key) 
                         
			{
				                                parent = curr;
				                                side = 1;
				                                curr = curr->left;
				                        
			}
			                        else  if  (word > curr->key) 
                         
			{
				                                parent = curr;
				                                side = 2;
				                                curr = curr->right;
				                        
			}
			                        else  if  (word == curr->key) 
                         
			{
				                                cout << "WORD FOUND" << endl;
				                                flag = true;
				                        
			}
			                
		}
		                if  (flag == true) 
                 
		{
			                         //Delete root 
                         if  (curr == root) 
                         
			{
				                                root = root->left;
				                        
			}
			                        else  if  (curr->left == NULL) 
                         
			{
				                                root = root->right;
				                        
			}
			                        else  if  (curr->left != NULL && curr->right != NULL) 
                         
			{
				                                temp = curr->left;
				                                root = curr->right;
				                                s = curr->right;
				                                while (s->left != NULL) 
                                 
				{
					                                        s = s->left;
					                                
				}
				                                s->left = temp;
				                        
			}
			                         
                          // Deleting leaf node 
                         if  (curr->left == NULL && curr->right == NULL ) 
                         
			{
				                                if  (side == 1) 
                                 
				{
					                                        parent->left = NULL;
					                                
				}
				                                else  if  (side == 2) 
                                 
				{
					                                        parent->right = NULL;
					                                
				}
				                        
			}

			                         // if there is only one child 
                         if  ((curr->left != NULL && curr->right == NULL) || (curr->right != NULL && curr->left == NULL)) 
                         
			{
				                                if  (curr->left != NULL) 
                                 
				{
					                                        if  (side == 1) 
                                         
					{
						                                                parent->left = curr->left;
						                                        
					}
					                                        else  if  (side == 2) 
                                         
					{
						                                                parent->right = curr->left;
						                                        
					}
					                                
				}
				                        
			}
			                         // two childs 
                         inorder_traversal_iterative(root);

			                
		}

		        
	}

	         // inorder iterative 
         void inorder_traversal_iterative(treenode * temp) 
         
	{
		                if  (!temp)
		{
			                        return;
			                
		}
		                stack<treenode *> in_tra_it_S;
		                treenode *curr = temp;

		                while (curr != NULL || in_tra_it_S.empty() == false) 
                 
		{
			                        while (curr != NULL) 
                         
			{
				                                in_tra_it_S.push(curr);
				                                curr = curr->left;
				                        
			}
			                        curr = in_tra_it_S.top();
			                        in_tra_it_S.pop();
			                        cout << curr->key << " : " << curr->definition << endl;
			                        curr = curr->right;
			                
		}
		        
	}
	        
};
/*Test cases
1. left skewed 
2. Right skewed
3. Complete Tree
4. Full tree
5. Normal Tree
6. Binary search Tree
*/
int main() 
{
	        Binary_search_tree bst, cp_tree, mirror_tree;
	        int ch;
	        char c;
	do
		 
		{
			        cout << "\nWhat you want to do:\n1 Create Binary Search Tree\n2.Inorder Traversal Iterative\n3.Preorder Traversal Iterative\n4.Postorder Traversal Iterative\n5.Breadth-First Search (BFS)\n6.Copy Binary Search Tree\n7.Mirror Binary Search Tree\n8.Delete word\n9.Exit\nchoose:" << endl;
			        cin >> ch;
			        switch (ch) 
         
			{
			                case 1:
				                                bst.create();
				                                break;
			                case 2:
				                                cout << "Traversing through tree with Inorder Traversal:" << endl;
				                                bst.inorder_traversal_iterative(bst.root);
				                                break;
			                case 3:
				                                cout << "Traversing through tree with Preorder Travesal:" << endl;
				                                 // bst.preorder_traversal_iterative(bst.root); 
                                 break;
			                case 4:
				                                cout << "Traversing through tree with Postorder Traversal:" << endl;
				                                 // bst.postorder_traversal_iterativ(bst.root); 
                                 break;
			                case 5:
				                                cout << "Traversing through tree with Breadth- First Search: " << endl;
				         
                                 bst.BFS();
				                                break;
			                case 6:
				  
                                 cout << "Copy of Binary search Tree:" << endl;
				                                cp_tree.root = cp_tree.copy_bst_recursive(bst.root);
				                                 // cout<<"Traversing through tree with Inorder Iterative:"<<endl; 
                                  // cp_tree.inorder_traversal_iterative(cp_tree.root); 
                                 cout << "Traversing through tree with Breadth- First Search: " << endl;
				                                cp_tree.BFS();
				                                break;
			                case 7:
				                                cout << "Creating Mirror of Binary search Tree:" << endl;
				                                bst.mirror_BST();
				                                mirror_tree.root = bst.root;
				                                cout << "Traversing through tree with Inorder Iterative:" << endl;
				                                 // mirror_tree.inorder_traversal_iterative(mirror_tree.root); 
                                 cout << "Traversing through tree with Breadth- First Search: " << endl;
				                                mirror_tree.BFS();
				                                break;
			                case 8:
				                                cout << "Deleting Word....." << endl;
				                                bst.delete_node();
				                                bst.BFS();
				                                break;
				                default : 
                                 cout << "Invalid choice";
				                        break;
				                
			}

			                cout << "Do you want to continue(y/n):";
			                cin >> c;
			        
		}
	while (c == 'y');

	         
         return 0;
}