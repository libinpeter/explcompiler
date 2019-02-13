struct tnode* Createtree(int val,int type,char* varname,int nodetype,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val=val;
    temp->type=type;
    temp->nodetype=nodetype;
    if(varname!=NULL)
    {
    temp->varname=(char*)malloc(sizeof(char));
    *(temp->varname)=varname;
    }
    else
    {
    temp->varname=NULL;
    }
    temp->left = l;
    temp->right = r;
    return temp;
}
int codegen(struct tnode* t,FILE* out)
{    int r,l,m,add;
    switch(t->nodetype)
    {
        case RD: 
                 r=getreg();
                 add=4096 + *(t->left->varname)-'a';
                 fprintf(out,"MOV R%d,\"Read\"\n",r);
                 fprintf(out,"PUSH R%d\n",r);
                 fprintf(out,"MOV R%d,%d\n",r,-1);
                 fprintf(out,"PUSH R%d\n",r);
                 fprintf(out,"MOV R%d,%d\n",r,add);
                 fprintf(out,"PUSH R%d\n",r);
                 fprintf(out,"PUSH R0\n");
                 fprintf(out,"PUSH R0\n");
                 fprintf(out,"CALL 0\n");
                 fprintf(out,"POP R%d\n",r);
                 fprintf(out,"POP R0\n");
		         fprintf(out,"POP R0\n");
		         fprintf(out,"POP R0\n");
		         fprintf(out,"POP R0\n");
                 return r;
                 break;

        case WT:
                 r=getreg();
                 l=codegen(t->left,out);
                 fprintf(out,"MOV R%d,\"Write\"\n",r);
                 fprintf(out,"PUSH R%d\n",r);
                 fprintf(out,"MOV R%d,%d\n",r,-2);
                 fprintf(out,"PUSH R%d\n",r);
                 fprintf(out,"PUSH R%d\n",l);
                 fprintf(out,"PUSH R0\n");
                 fprintf(out,"PUSH R0\n");
                 fprintf(out,"CALL 0\n");
                 fprintf(out,"POP R%d\n",r);
                 fprintf(out,"POP R0\n");
		         fprintf(out,"POP R0\n");
		         fprintf(out,"POP R0\n");
		         fprintf(out,"POP R0\n");
                 freereg();
                 return r;
                 break;

        case CONST:
                   r=getreg();
                   fprintf(out,"MOV R%d,%d\n",r,t->val);
                   return r;
                   break;
        
        case CONN:
                 if(t->left)
                  {
                      l=codegen(t->left,out);
                      freereg();
                  }
                  if(t->right)
                  {
                      l=codegen(t->right,out);
                      freereg();
                  }return l;
                  break;
        
        case VAR:
                 add=4096+*(t->varname)-'a';
		         r=getreg();
		         fprintf(out,"MOV R%d, [%d]\n",r,add);
		         return r;
		         break;
	    case ASSN:
                   m=codegen(t->right,out);
	               add=4096 + *((t->left)->varname)-'a';
		           fprintf(out,"MOV [%d],R%d\n",add,m);
		           return m;
		           break;
        
        case EXPR:
                   l=codegen(t->left,out);
                   m=codegen(t->right,out);
    
                  switch(*(t->varname)){
            case '+' : fprintf(out,"ADD R%d,R%d\n", l,m);
                       freereg();
					   return l;
                       break;
            case '-' : fprintf(out,"SUB R%d,R%d\n", l,m);
                        freereg();
						return l;
                       break;
            case '*' : fprintf(out,"MUL R%d,R%d\n", l,m);
                       freereg();
					    return l;
                       break;
            case '/' : fprintf(out,"DIV R%d,R%d\n", l,m);
                       freereg();
					    return l;
                       break;
        }

                 
    }
}
int evaluate(struct tnode* t)
{   int lval,rval,c;
    switch((t->nodetype))
    {
    	case CONN :
    	          if(t->left!=NULL)
    	            {
    	             lval= evaluate(t->left);
    	            }
    	          if(t->right!=NULL)
    	             {
    	              rval=evaluate(t->right);
    	              return rval;
    	             }  
    		         break;
    	case VAR :
    		      c=*(t->varname)-'a';
    		      return var[c];
    		      break;
    	case ASSN:
    		       c=*(t->left->varname)-'a';
    		       rval=evaluate(t->right);
    		       var[c]=rval;
    		       return rval;
    		       break;			
    	case CONST:
    	             return t->val;
    	             break;	
        case EXPR:
                 switch(*(t->varname)){
                  case '+' : return evaluate(t->left) + evaluate(t->right);
                             break;
                  case '-' : return evaluate(t->left) - evaluate(t->right);
                             break;
                  case '*' : return evaluate(t->left) * evaluate(t->right);
                             break;
                  case '/' : return evaluate(t->left) / evaluate(t->right);
                             break;
        }
       case RD:
       	      c=*(t->left->varname)-'a';
       	      scanf("%d",&var[c]);
       	      return var[c];
       	      break;
       case WT: 	     	 	       
    	      rval=evaluate(t->left);
       	      printf("%d\n",rval);
       	      return rval;
       	      break;
    }


}
int getreg()
{ 
  if(reg<20)
  return reg++;
  else
  {
    printf("no free Reg\n"); 
    exit(1);
  }
}
//To free register
void freereg()
{
    if(reg>0)
    return reg--;
}

/*int evaluate(struct tnode* t)
{   int lval,rval;
    int varct;
    switch((t->nodetype))
    {
    	case CONN:
    	       if(t->left!=NULL)
    	         {
    	         lval= evaluate(t->left);
    	         }
    	       if(t->right!=NULL)
    	          {
    	          rval=evaluate(t->right);
    	          return rval;
    	          }  
    		break;
    	case VAR:
    		varct=*(t->varname)-'a';
    		return var_array[varct];
    		break;
    	case ASSGN:
    		varct=*(t->left->varname)-'a';
    		rval=evaluate(t->right);
    		var_array[varct]=rval;
    		return rval;
    		break;			
    	case CONSTANT:
    	       return t->val;
    	       break;	
        case EX:
             switch(*(t->varname)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
       case READ:
       	     varct=*(t->left->varname)-'a';
       	     scanf("%d",&var_array[varct]);
       	     return var_array[varct];
       	     break;
       case WRITE: 	     	 	       
    	     rval=evaluate(t->left);
       	     printf("%d\n",rval);
       	     return rval;
       	     break;
    }


}

















































/*void check(struct tnode *t)
{  printf("\n[");
  printf("val %d\n",t->val);
  printf("type %d\n",t->type);
  printf("nodetype %d\n",t->nodetype);
  switch(t->nodetype){
  case 1:
    printf("VAR\n");
    break;
    case 2:
    printf("CONST\n");
    break;
    case 3:
    printf("EXPR\n");
    break;
    case 4:
    printf("ASSN\n");
    break;
    case 5:
    printf("RD\n");
    break;
    case 6:
    printf("WT\n");
    break;
    case 7:
    printf("CONN\n");
    break;
   
  }
  
  if(t->varname!=NULL)
  printf("varname %c\n",*(t->varname));
 printf("]\n");
}
void inorder(struct tnode *t)
{ 
if(t==NULL)
   return;
  inorder(t->left);
  check(t);
  inorder(t->right);

}
*/