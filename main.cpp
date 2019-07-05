#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    unsigned n,i,j,k;
    bool flag=false;
    cin>>n;
    while(n--)
    {
        unsigned sen,len;
        cin>>len>>sen;
        char **s=new char*[sen+1];
        unsigned *inv=new unsigned[sen+1];
        for( i=0; i<sen; i++)
        {
            s[i]=new char[len+1];
            scanf("%s",s[i]);
            inv[i]=0;
            for( j=0; j<len; j++)
            {
                for( k=j+1; k<len; k++)
                {
                    if(s[i][j]>s[i][k])
                        inv[i]++;
                }
            }
        }
        for( i=0; i<sen-1; i++)
        {
            for( j=0; j<sen-i-1; j++)
            {
                if(inv[j]>inv[j+1])
                {
                    swap(inv[j],inv[j+1]);
                    swap(s[j],s[j+1]);
                }
            }
        }
        if(flag==true)
            cout<<endl;
        flag=true;

        for( i=0; i<sen; i++)
            cout<<s[i]<<endl;


    }

    return 0;
}
