#include<iostream>
#include<stack>
using namespace std;
void perform_operations(string a)
{
    stack<char> ch;
    int i,j,l=a.length();
    for(i=0;i<l;i++)
    {
        if(isdigit(a[i]))
        {
            int val=0;
            while(i<l && isdigit(a[i]))
            {
                val=val*10+(a[i]-'0');
                i++;
            }
            i--;
            for(j=0;j<val;j++)
                cout<<ch.top();
            ch.pop();
        }
        else
        {
            ch.push(a[i]);
        }
    }
}


int main()
{
    string s;
    cin>>s;
    perform_operations(s);
}
