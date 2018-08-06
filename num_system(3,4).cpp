#include<iostream>
using namespace std;

void perform_operation(int n)
{
    string a[n+1];
    a[0]="";
    int size=1,m=1,i,j;
    while(size<=n)
    {
        for(i=0;i<m && (size+i)<=n;i++)
            a[size+i]="3"+a[size-m+i];
        for(i=0;i<m && (size+m+i)<=n;i++)
            a[size+m+i]="4"+a[size-m+i];
        m*=2;
        size+=m;
    }
 cout<<n<<"th term is :"<<a[n]<<endl;
}

int main()
{
    for(int i=1;i<=10;i++)
    perform_operation(i);

}
