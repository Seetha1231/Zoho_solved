#include<iostream>
using namespace std;

void reverse_str(string word)
{
    int n=word.length();
    if(n==1)
    {
        cout<<word;
        return;
    }
    cout<<word[n-1];
    reverse_str(word.substr(0,n-1));
}

int main()
{
    string word;
   getline(cin,word);
    reverse_str(word);
}
