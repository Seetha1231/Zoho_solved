#include<iostream>
using namespace std;

int main()
{
    int a[7]={13,2,4,15,12,10,5};
        int n=7;
    int i,j,p,temp;
    for(i=0;i<7;i+=2)
    {
        p=i;
        for(j=i+2;j<7;j+=2){
            if(a[p]<a[j])
                p=j;}
        if(p!=i)
        {
            temp=a[i];
            a[i]=a[p];
            a[p]=temp;
        }

    }
    for(i=0;i<7;i++)
        cout<<a[i]<<"\t";
     for(i=1;i<7;i+=2)
    {
        p=i;
        for(j=i+2;j<7;j+=2){
            if(a[p]>a[j])
                p=j;}
        if(p!=i)
        {
            temp=a[i];
            a[i]=a[p];
            a[p]=temp;
        }

    }
    cout<<endl;
        for(i=0;i<7;i++)
        cout<<a[i]<<"\t";
}
