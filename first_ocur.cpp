#include<iostream>
using namespace std;

int first_occur(string s,string ss)
{
    int i,j,val,k;
    int ls=s.length(),lss=ss.length();
    for(i=0;i<ls;i++)
    {
        val=-1;
        j=0;
        k=0;
        while(s[i]==ss[j] && i<ls )
        {
            k+=1;
            j+=1;
            i+=1;
            if(lss==j)
            {
                val=i-j;
                return val;
            }
        }
    }
    return val;

}

main()
{
    string s,ss;
    cin>>s;
    cin>>ss;
    cout<<first_occur(s,ss);
}
