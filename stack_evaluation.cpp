#include<iostream>
#include<stack>
using namespace std;

int precedence(char c)
{
    if(c=='+' || c=='-')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
    return 0;
}


int perform_operation(int a,int b,char opr)
{
    switch(opr){
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
    case '/': return a/b;
    }
}


int evaluate_expression(string exp)
{
    int i,j,k;
    stack<char> ops;
    stack<int>values;
    int len=exp.length();
    for(i=0;i<len;i++)
    {
        if(exp[i]==' ')
            continue;
        else if(exp[i]=='(')
            ops.push(exp[i]);
        else if(isdigit(exp[i]))
        {
            int val=0;
            while(i<len && isdigit(exp[i]))
            {
                val=(val*10)+(exp[i]-'0');
                i++;
            }
            i--;
            values.push(val);
        }
        else if(exp[i]==')')
        {
            while(!ops.empty() && ops.top()!='(')
            {
                int val2=values.top();values.pop();
                char op=ops.top(); ops.pop();
                int val1=values.top(); values.pop();

                values.push(perform_operation(val1,val2,op));
            }
            ops.pop();
        }
        else
        {
            while(!ops.empty() && precedence(ops.top())>=precedence(exp[i]))
            {
                int val2=values.top();values.pop();
                char op=ops.top(); ops.pop();
                int val1=values.top(); values.pop();
                values.push(perform_operation(val1,val2,op));
            }
            ops.push(exp[i]);
        }
    }

    while(!ops.empty())
    {
                int val2=values.top();values.pop();
                char op=ops.top(); ops.pop();
                int val1=values.top(); values.pop();
                values.push(perform_operation(val1,val2,op));
    }
    return values.top();
}



int main()
{
    string s;
    cin>>s;
    cout<<evaluate_expression(s);
    return 0;

}
