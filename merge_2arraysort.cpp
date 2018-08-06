#include<iostream>
using namespace std;

int main()
{
    int a[8]={2,4,5,6,7,9,10,13};
    int b[10]={2,3,4,5,6,7,8,9,11,15};
    int i=0,j=0,n=8,m=10,k=0,me[20];
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            me[k++]=a[i];
            if(a[i]==b[j])
                j++;
            i++;
        }
        else
        {
            me[k++]=b[j];
            j++;
        }
    }
    cout<<i<<j<<endl;
    if(i<n){
            cout<<endl;
            for(j=i;j<n;j++)
        me[k++]=a[j];
    }
    if(j<m){
            cout<<j<<m<<endl;
        for(i=j;i<m;i++)
        me[k++]=b[i];}
    for(i=0;i<k;i++)
        cout<<me[i]<<"\t";
}
