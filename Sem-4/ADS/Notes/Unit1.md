# Unit 1 #

## Advanced Data Structures ##

    if(curr == root)    // deletion of root node
    {
        if( curr -> rightc == NULL)
            root = root -> leftc;
        elsei if ( curr -> leftc == NULL)
            root = root -> rightc;
    }



    else if(curr!=root)
    {
        if(curr)
    }
    
    ##############################################
    

    else if(curr!=root)
    {
        if(curr left and right is NULL)
        {
            if(parent->leftc==curr)
            parent->leftc = NULL;
            else
            parent->rightc = NULL;
        }
        else if(curr->leftc is NULL)
        {
            if(parent->leftc==curr)
            parent
        }
    }

    ##############################################

    else    // deletion of a node having two child
    {
        s=curr->rightc;
        temp=curr->leftc;
        while(s->leftc!=NULL)
        {
            s=s->leftc;
        }
        s->leftc=temp;
        if(parent->leftc==curr)
            parent->leftc=curr->rightc;
        else
            parent->rightc=curr->rightc;
    }

    Assign curr left and right to NULL;
    delete curr;

## Memory Representation of Threaded Tree ##

To maintain memory representation of threaded tree, we need a head pointer

    class tbtnode
    {
        cahr data;
        boo rbit;
        bool lbit;
        tbtnode *rightc;
        tbtnode *leftc;
        friend class tbt;
        public:
            tbtnode();
    };

    tbtnode::tbtnode()
    {
        lbit = 1;
        rbit = 1;
    }

    class tbt
    {
        tbtnode *head;
        public:
        void create();
        void preorder();
        tbtnode * presuccr(tbtnode*temp);
        void inorder();
    }

    ################################################################

    create()
    {
        allocate memory for root;
        accept root data;
        assignhead lbit to 0;
        assign root -> leftc and rightc to head;
        assign head -> leftc to root;

        do 
        {
          initialize flag to 0;
          temp = root; allocate memeory to curr and accept curr->data;  
        }
        while(flag==0)
        {
            accept choice left or right;
            if ch1='1'
            {
                if(temp->lbit==1)
                {
                    curr->rightc=temp;
                    curr->leftc=temp->leftc;
                    temp->leftc=curr;
                    temp->lbit=0;
                    flag=1;
                }
                else 
                    temp=temp->leftc;
            }
        }
    }

    ################################################################

    inorder()
    {
        temp = head;
        while(1)
        {
            temp=inordersucc(temp);
            if(temp==head) break;
            print temp->data;
        }
    }

    node*inordersucc(temp)
    {
        x=temp->rbit;
        if(temp->rbit==0)
        {
            while(x->lbit==0)
                x=x->left;
        }
    }

    ################################################################

    preorder()
    {
        assigne temp to head->left;
        while(temp!=head)
        {
            print temp->data;
            while(temp->lbit!=1)
            {
                move temp to temp->left;
                print temp->data;
            }
            while(temp->rbit ==1)
                move temp to temp->right;
                move temp to temp ->right;
        }
    }

Disadvantages of threaded binary tree:

- Insertion and deletion from a threaded tree are vey time consuming operation compared to non-threaded binary tree.
- This treee require additional bit to indentify the threaded link.

## Building an Expression tree ##
