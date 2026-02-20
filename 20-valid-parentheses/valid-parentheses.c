bool isValid(char* s) {
    int len=strlen(s);
    char stack[len];
    int top=-1;
    int i;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
        top++;
        stack[top]=s[i];
        }

        else if (s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(top==-1)
            {
            return false;
            }
        char temp=stack[top];
        top--;
        if((temp=='(' && s[i]!=')') ||
           (temp=='{' && s[i]!='}') ||
           (temp=='[' && s[i]!=']'))
        {
        return false;
        }
    }
}
if(top==-1)
{
    return true;
}
else
{
    return false;
}
}
    