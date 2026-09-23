char stack[10000];
int top;
void push(char val)
{
    if(top==9999)
        return;

         stack[++top]=val;
    
}
int pop()
{
    if(top==-1){
        return -1;
    }
    return stack[top--];
}

bool isValid(char* s) {
    top=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(' || s[i]=='['|| s[i]=='{')
        {
            push(s[i]);
        }
        else{
            char ele = pop();
            if(ele==-1)
                return false;
        if (s[i]==')' && ele != '(' ) return false;
        if (s[i]==']' && ele != '[' ) return false;
        if (s[i]=='}' && ele != '{' ) return false;
        }

        
    }
    return (top==-1);
}