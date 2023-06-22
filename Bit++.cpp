#include<bits/stdc++.h>
using namespace std;
int func(string a,int m)
{
    if(a=="++X")
        return ++m;
    else if(a=="--X")
        return --m;
    else if(a=="X--")
    {
        m--;
         return m;
    }
    else if(a=="X++")
    {
        m++;
        return m;
    }
}
int main()
{
    int i,result=0,n,x=0,m=0;
    string a;
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    {
        getline(cin,a);
        m=x;
        m=func(a,m);
        result=result+m;
    }
    cout<<result;

}
