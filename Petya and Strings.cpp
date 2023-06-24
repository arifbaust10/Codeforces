#include<iostream>
using namespace std;
string conver_lower(string a);
int calculation(string a,string b);
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    a=conver_lower(a);
    b=conver_lower(b);
    cout<<calculation(a,b);
}
string conver_lower(string a)
{
    int i,len=a.size();
    for(i=0;i<len;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {

        }
        else
        {
           a[i]=a[i]+32;
        }
    }
    return a;
}
int calculation(string a,string b)
{
    int i,len=a.size(),c=0;
    for(i=0;i<len;i++)
    {
        if(a[i]>b[i])
        {
            c++;
            return 1;
        }
        else if(a[i]<b[i])
        {
            c++;
            return -1;
        }
    }
    if(c==0)
        return 0;

}
