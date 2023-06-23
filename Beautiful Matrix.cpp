#include<iostream>
using namespace std;
int calculation(int l,int m)
{
    if(l>2 && m>2)
        {
             return (l-2)+(m-2);
        }
        else if(l<=2 && m<=2)
        {
             return (2-l)+(2-m);
        }
        else if(l<=2 && m>=2)
        {
            return (2-l)+(m-2);
        }
        else if(l>=2 && m<=2)
        {
             return (l-2)+(2-m);
        }

}
int main()
{
    int result,i,j,a[6][6],m,l,c=1;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                l=i;
                m=j;
            }
        }
    }
    cout<<calculation(l,m);

}
