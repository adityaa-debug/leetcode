int evalRPN(char** tokens, int tokensSize) {
    int stack[10000];
    int top=-1;
    for(int i=0;i<tokensSize;i++)
    {
        if(isdigit(tokens[i][0]) || (tokens[i][0]=='-' && isdigit(tokens[i][1])))
        {
            stack[++top]=atoi(tokens[i]);
        }
        else
        {
            int a=stack[top--];
            int b=stack[top--];
            int result;

            switch (tokens[i][0])
            {
                case'+':
                result=b+a;
                break;
                
                case '-':
                result=b-a;
                break;
                
                case '*':
                result=b*a;
                break;
                
                case '/':
                result=b/a;
                break;
            }
            stack[++top]=result;
        }
    }
    return stack[top];
}