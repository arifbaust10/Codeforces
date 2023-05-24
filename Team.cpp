#include<iostream>
using namespace std;
int main()
{
    int i,m,c=0,n,l;
    cin>>i;
    while(i--)
    {
    cin>>m>>n>>l;
    if(m==1&&n==1)
    {
       c++;
    }
    else if(l==1&&n==1)
    {
       c++;
    }
    else if(m==1&&l==1)
    {
       c++;
    }
    else{
       continue;
      }
     }
    cout<<c;
     return 0;

}
