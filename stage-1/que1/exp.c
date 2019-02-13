struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int getreg()
{
    if(regno==21)
    {
        printf("no free reg"); exit(0);
    }
    else
    return regno++;
}
int freereg()
{
    return regno--;
}

int codegen(struct tnode* root,FILE* fout)
{  
  
   if(root->op == NULL)
    {
        int r = getreg();
        fprintf(fout,"MOV R%d, %d\n",r,root->val);
        return r;
    }
    int i=codegen(root->left,fout);
    int j=codegen(root->right,fout);
    
        switch(*(root->op)){
            case '+' : fprintf(fout,"ADD R%d,R%d\n", i,j);
                       freereg();
					   return i;
                       break;
            case '-' : fprintf(fout,"SUB R%d,R%d\n", i,j);
                        freereg();
						return i;
                       break;
            case '*' : fprintf(fout,"MUL R%d,R%d\n", i,j);
                       freereg();
					    return i;
                       break;
            case '/' : fprintf(fout,"DIV R%d,R%d\n", i,j);
                       freereg();
					    return i;
                       break;
        }
   
 }
 void stack(FILE* fout)
 {   int add=4096;
     fprintf(fout,"MOV [%d],R0\n",add);

 }
 void print(FILE* fout)
 {  int add=4096;
   fprintf(fout,"MOV SP,4096\n");
    fprintf(fout,"MOV R1, \"Write\"\n");
    fprintf(fout,"PUSH R1\n");
    fprintf(fout,"MOV R1,-2\n");
    fprintf(fout,"PUSH R1\n");
    fprintf(fout,"MOV R0,[%d]\n",add);
    fprintf(fout,"PUSH R0\n");
    fprintf(fout,"PUSH R0\n");
    fprintf(fout,"PUSH R0\n");
    fprintf(fout,"CALL 0\n");
    fprintf(fout,"POP R0\n");
    fprintf(fout,"POP R0\n");
    fprintf(fout,"POP R0\n");
    fprintf(fout,"POP R0\n");
    fprintf(fout,"POP R0\n");
 }