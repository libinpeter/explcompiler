struct stack* lentry = NULL;
struct stack* lexit = NULL;
struct tnode* Createtree(int val, int type, char* varname, int nodetype, struct tnode* l, struct tnode* r, struct tnode* p)
{
    struct tnode* temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = val;
    temp->type = type;
    temp->nodetype = nodetype;
    if (varname != NULL) {
        temp->varname = (char*)malloc(sizeof(char));
        *(temp->varname) = varname;
    }
    else {
        temp->varname = NULL;
    }
    temp->left = l;
    temp->right = r;
    temp->ptr = p;
    checker(temp);
    return temp;
}
void checker(struct tnode* node)
{
    switch (node->nodetype) {
    case EXPR:
        switch (*(node->varname)) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '<':
        case '>':
        case LE:
        case GE:
        case NEQL:
        case EQL:
            if (node->left->type != INT || node->right->type != INT) {
                printf("type mismatch error \n");
                exit(1);
            }
            break;
        }
        break;

    case NIF:
    case NIFEL:
    case WHL:
        if (node->left->type == BOOL)
            return;
        printf("Type mismatch in if/while node\n");
        exit(1);
        break;

    case RD:
        if (node->left->nodetype == VAR)
            return;
        printf("type mismatch in Read node\n");
        exit(1);
        break;

    case WT:
        if (node->left->type == INT)
            return;
        printf("Type mismatch in Write node\n");
        exit(1);
        break;

    case ASSN:
        if (node->left->nodetype == VAR)
            if (node->left->type == node->right->type)
                return;
        printf("Type mismatch in assignment node\n");
        exit(1);
        break;

    default:
        break;
    }
}

void start()
{
    fprintf(out, "0\n2056\n0\n0\n0\n0\n0\n0\n");
}
void stack0()
{
    fprintf(out, "MOV SP, %d\n", 4121);
}
void exit0()
{
    fprintf(out, "INT 10\n");
}
int codegen(struct tnode* t, FILE* out)
{
    int r, l, m, add, k, j, i;
    switch (t->nodetype) {
    case RD:
        r = getreg();
        add = 4096 + *(t->left->varname) - 'a';
        fprintf(out, "MOV R%d,\"Read\"\n", r);
        fprintf(out, "PUSH R%d\n", r);
        fprintf(out, "MOV R%d,%d\n", r, -1);
        fprintf(out, "PUSH R%d\n", r);
        fprintf(out, "MOV R%d,%d\n", r, add);
        fprintf(out, "PUSH R%d\n", r);
        fprintf(out, "PUSH R0\n");
        fprintf(out, "PUSH R0\n");
        fprintf(out, "CALL 0\n");
        fprintf(out, "POP R%d\n", r);
        fprintf(out, "POP R0\n");
        fprintf(out, "POP R0\n");
        fprintf(out, "POP R0\n");
        fprintf(out, "POP R0\n");
        return r;
        break;

    case WT:
        r = getreg();
        l = codegen(t->left, out);
        fprintf(out, "MOV R%d,\"Write\"\n", r);
        fprintf(out, "PUSH R%d\n", r);
        fprintf(out, "MOV R%d,%d\n", r, -2);
        fprintf(out, "PUSH R%d\n", r);
        fprintf(out, "PUSH R%d\n", l);
        fprintf(out, "PUSH R0\n");
        fprintf(out, "PUSH R0\n");
        fprintf(out, "CALL 0\n");
        fprintf(out, "POP R%d\n", r);
        fprintf(out, "POP R0\n");
        fprintf(out, "POP R0\n");
        fprintf(out, "POP R0\n");
        fprintf(out, "POP R0\n");
        freereg();
        return r;
        break;

    case CONST:
        r = getreg();
        fprintf(out, "MOV R%d,%d\n", r, t->val);
        return r;
        break;

    case CONN:
        if (t->left) {
            l = codegen(t->left, out);
            freereg();
        }
        if (t->right) {
            l = codegen(t->right, out);
            freereg();
        }
        return l;
        break;

    case VAR:
        add = 4096 + *(t->varname) - 'a';
        r = getreg();
        fprintf(out, "MOV R%d, [%d]\n", r, add);
        return r;
        break;
    case ASSN:
        m = codegen(t->right, out);
        add = 4096 + *((t->left)->varname) - 'a';
        fprintf(out, "MOV [%d],R%d\n", add, m);
        return m;
        break;

    case EXPR:
        l = codegen(t->left, out);
        m = codegen(t->right, out);

        switch (*(t->varname)) {
        case '+':
            fprintf(out, "ADD R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case '-':
            fprintf(out, "SUB R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case '*':
            fprintf(out, "MUL R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case '/':
            fprintf(out, "DIV R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case '<':
            fprintf(out, "LT R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case '>':
            fprintf(out, "GT R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case LE:
            fprintf(out, "LE R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case GE:
            fprintf(out, "GE R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case EQL:
            fprintf(out, "EQ R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        case NEQL:
            fprintf(out, "NE R%d,R%d\n", l, m);
            freereg();
            return l;
            break;
        }

    case NIF:
        j = getlabel();
        l = codegen(t->left, out);
        fprintf(out, "JZ R%d,L%d\n", l, j);
        codegen(t->right, out);
        fprintf(out, "L%d:", j);
        freereg();
        break;
    case NIFEL:
        j = getlabel();
        l = codegen(t->left, out);
        fprintf(out, "JZ R%d,L%d\n", l, j);
        freereg();
        codegen(t->right, out);
        if (t->ptr != NULL) {
            k = getlabel();
            fprintf(out, "JMP L%d\n", k);
            fprintf(out, "L%d:", j);
            codegen(t->ptr, out);
            fprintf(out, "L%d:", k);
        }
        else
            fprintf(out, "L%d:", j);
        break;
    case WHL:
        i = getlabel();
        k = getlabel();
        lentry = push(lentry, i);
        lexit = push(lexit, k);
        fprintf(out, "L%d:", i);
        j = codegen(t->left, out);
        fprintf(out, "JZ R%d, L%d\n", j, k);
        freereg();
        codegen(t->right, out);
        fprintf(out, "JMP L%d\n", i);
        fprintf(out, "L%d:", k);
        break;
    case DWHL:
        codegen(t->right, out);
        i = getlabel();
        k = getlabel();
        fprintf(out, "L%d: ", i);
        j = codegen(t->left, out);
        fprintf(out, "JZ R%d, L%d\n", j, k);
        freereg();
        codegen(t->right, out);
        fprintf(out, "JMP L%d\n", i);
        fprintf(out, "L%d: ", k);
        break;
    case RPL:
        codegen(t->right, out);
        i = getlabel();
        k = getlabel();
        fprintf(out, "L%d: ", i);
        j = codegen(t->left, out);
        fprintf(out, "JNZ R%d, L%d\n", j, k);
        freereg();
        codegen(t->right, out);
        fprintf(out, "JMP L%d\n", i);
        fprintf(out, "L%d: ", k);
        break;
    case BRK:
        if (lexit != NULL) {
            int exit1;
            lexit = pop(lexit, &exit1);
            fprintf(out, "JMP L%d\n", exit1);
            lentry = pop(lentry, &exit1);
        }
        break;
    case CNT:
        if (lentry != NULL) {
            int entry1;
            lentry = pop(lentry, &entry1);
            fprintf(out, "JMP L%d\n", entry1);
            lexit = pop(lexit, &entry1);
        }
        break;
    }
}
int evaluate(struct tnode* t)
{
    int lval, rval, c;
    switch ((t->nodetype)) {
    case CONN:
        if (t->left != NULL) {
            lval = evaluate(t->left);
        }
        if (t->right != NULL) {
            rval = evaluate(t->right);
            return rval;
        }
        break;
    case VAR:
        c = *(t->varname) - 'a';
        return var[c];
        break;
    case ASSN:
        c = *(t->left->varname) - 'a';
        rval = evaluate(t->right);
        var[c] = rval;
        return rval;
        break;
    case CONST:
        return t->val;
        break;
    case EXPR:
        switch (*(t->varname)) {
        case '+':
            return evaluate(t->left) + evaluate(t->right);
            break;
        case '-':
            return evaluate(t->left) - evaluate(t->right);
            break;
        case '*':
            return evaluate(t->left) * evaluate(t->right);
            break;
        case '/':
            return evaluate(t->left) / evaluate(t->right);
            break;
        case '<':
            return evaluate(t->left) < evaluate(t->right);
            break;
        case '>':
            return evaluate(t->left) > evaluate(t->right);
            break;
        case EQL:
            return evaluate(t->left) == evaluate(t->right);
            break;
        case NEQL:
            return evaluate(t->left) != evaluate(t->right);
            break;
        case LE:
            return evaluate(t->left) <= evaluate(t->right);
            break;
        case GE:
            return evaluate(t->left) >= evaluate(t->right);
            break;
        }
    case RD:
        c = *(t->left->varname) - 'a';
        scanf("%d", &var[c]);
        return var[c];
        break;
    case WT:
        rval = evaluate(t->left);
        printf("%d\n", rval);
        return rval;
        break;
    case NIF:
        if (evaluate(t->left))
            return evaluate(t->right);
        break;
    case NIFEL:
        if (evaluate(t->left))
            return evaluate(t->right);
        else
            return evaluate(t->ptr);

    case WHL:
        while (evaluate(t->left)) {
            rval = evaluate(t->right);
        }
        return rval;
        break;
    }
}

int getreg()
{
    if (reg < 20)
        return reg++;
    else {
        printf("no free Reg\n");
        exit(1);
    }
}
void freereg()
{
    if (reg > 0)
        return reg--;
}
int getlabel()
{
    return label++;
}

struct stack* push(struct stack* top, int label)
{
    struct stack* temp = malloc(sizeof(struct stack));
    temp->label = label;
    temp->next = NULL;
    if (top == NULL)
        return temp;
    temp->next = top;
    return temp;
}

struct stack* pop(struct stack* top, int* label)
{
    *label = top->label;
    struct stack* temp = top->next;
    free(top);
    return temp;
}

/*

void check(struct tnode *t)
{  printf("\n[");
  printf("val %d\n",t->val);
  printf("type %d\n",t->type);
  printf("nodetype %d\n",t->nodetype);
  switch(t->nodetype){
  case 3:
    printf("VAR\n");
    break;
    case 4:
    printf("CONST\n");
    break;
    case 5:
    printf("EXPR\n");
    break;
    case 6:
    printf("ASSN\n");
    break;
    case 7:
    printf("RD\n");
    break;
    case 8:
    printf("WT\n");
    break;
    case 9:
    printf("CONN\n");
    break;
    case 10:
    printf("NIF\n");
    break;
    case 11:
    printf("NIFEL\n");
    break;
    case 12:
    printf("WHL\n");
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
  inorder(t->ptr);

}
*/