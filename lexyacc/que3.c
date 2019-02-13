struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
     temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
     temp;
}


int preorder(struct tnode *t){
    if(t == NULL)
    {
       return 0;
    }
    else{
       if(t->val!=0)
printf("%d ",t->val);
else
printf("%s ",t->op); 
preorder(t->left) ;
preorder(t->right);

    }
}