#include <iostream>

using namespace std;

class dnode{
    char word[20];
    char meaning[20];
    dnode *right;
    dnode *left;
    friend class dictionary;
};

class dictionary{
    dnode *root;
    
    public:
    void create();
    void insert();
    void remove(char key[20]);
    void modify();
    void displayBFS();
    void inorder_disp();
    void inorder_disp(dnode*);

    dictionary(){
        root = NULL;
    }
};

void dictionary::create(){
    int flag = 1;
    char ch;
    dnode *temp;
    dnode *curr;
    root = new dnode();
    cout << "Enter root data (word): ";
    cin >> root -> word;
    cout << "Enter root data (meaning): ";
    cin >> root -> meaning;
    root -> left = root -> right = NULL;
    do{
        temp = root;
        curr = new dnode();
        cout << "Enter word: ";
        cin >> curr -> word;
        cout << "Enter meaning: ";
        cin >> curr -> meaning;
        curr -> left = curr -> right = NULL;
        while(flag ==1){
            int i = strcmp(curr -> word, temp->word);
            if (curr -> word < temp -> word){
                if(temp -> left == NULL){
                    temp -> left = curr;
                    flag =0;
                    break;
                }
                else{
                    temp = temp -> left;
                    flag =1;
                }
            }
            else if (curr -> word > temp -> word){
                if (temp -> right == NULL){
                    temp -> right = curr;
                    flag = 0;
                    break;
                }
                else{
                    temp = temp -> right;
                    flag = 1;
                }
            }
        }
        cout << "Do you want to continue? ";
        cin >> ch;
    }while(ch == 'y');
}

void dictionary::insert(){
    dnode *curr;
    dnode *temp;
    char ch;
    do{
        temp = root;
        curr = new dnode();
        cout << "Enter word: ";
        cin >> curr -> word;
        cout << "Enter meaning: ";
        cin >> curr -> meaning;
        curr -> left = curr -> right = NULL;
        if (root == NULL){
            root = curr;
        }
        else{
            int flag =0;
            while (flag ==0){
                int i = strcmp(curr -> word, temp->word);
                if(i<0){
                    if (temp -> left == NULL){
                        temp -> left = curr;
                        flag =1;
                        break;
                    }
                    else{
                        temp = temp->left;
                    }
                }
                else if ( i>0){
                    if (temp -> right == NULL){
                        temp -> right = curr;
                        flag =1;
                        break;
                    }
                    else{
                        temp = temp -> right;
                    }
                }
                else{
                    cout << "Word already exists";
                }
            }
        }
        cout << "Do you want to continue? ";
        cin >> ch;

    }while (ch == 'y');
}

void dictionary::remove(char key[20]){
    dnode *temp;
    dnode *parent;
    dnode *curr, *s, *s1;
    temp = root;
    while (temp != NULL){
        int i = strcmp(key, temp->word);
        if (i < 0){
            parent = temp;
            temp = temp -> left;
        }
        else if( i >0){
            parent = temp;
            temp = temp -> right;
        }
        else{
            curr = temp;
            break;
        }
    }
    if ( curr == root){
        if ( curr -> left != NULL && curr -> right == NULL){
            root = curr -> left;
        }
        else if ( curr -> left == NULL && curr -> right != NULL){
            root = curr -> right;
        }
        else if ( curr -> right != NULL && curr -> left != NULL){
            temp = curr -> left;
            root = curr -> right;
            s = curr -> right;
            while( s-> left != NULL){
                s= s -> left;
            }
            s-> left = temp;
        }
    }
    else if ( curr -> left == NULL && curr -> right == NULL){
        if ( curr == parent -> left){
            parent -> left = NULL;
        }
        else{
            parent -> right = NULL;
        }
     
    }
    else if ( curr -> left != NULL && curr -> right == NULL){
        if ( curr == parent -> left){
            parent -> left = curr -> left;
        }
        else{
             parent -> right = curr -> left;
        }

    }
    else if ( curr -> left == NULL && curr -> right != NULL){
        if ( curr == parent -> left){
            parent -> left = curr -> right;
        }
        else{
            parent -> right = curr -> right;
        }

    }
    else if ( curr -> left != NULL && curr -> right != NULL){
        s= curr -> right;
        s1 = s;
        temp = curr -> left;
        while ( s-> left != NULL){
            s= s-> left;
        }
        s-> left = temp;
        if (curr == parent -> left){
            parent -> left = s1;
        }
        else{
            parent -> right = s1;
        }
    }
    
    curr -> left = curr -> right = NULL;
    delete(curr);
}




void dictionary::inorder_disp(){
    inorder_disp(root);
}

void dictionary::inorder_disp(dnode *b){
    if (b != NULL){
        inorder_disp( b -> left );
        cout << b -> word << endl ;
        inorder_disp(b -> right);
    }
}



int main(){

    char key[20];
    dictionary a;
    dictionary();
    a.insert();
    a.inorder_disp();

    cout << "Enter key to be deleted: ";
    cin >> key;
    a.remove(key);
    a.inorder_disp();



    return 0;
}