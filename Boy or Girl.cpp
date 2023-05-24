#include<bits/stdc++.h>
using namespace std;
int fun(string a)
{
    int i,k,j,c=0,len=a.size();
    vector<int> b;
    for(i=0;i<len;i++)
    {
        k=a[i]-'0';
        b.push_back(k);
    }
    sort(b.begin(), b.end());
    vector<int> s;
    for(i=0;i<len;i++)
    {
        s.push_back(b[i]);
        for(j=i;j<len;j++)
        {
            if(b[j]==b[j+1])
            {
                i=j+1;
                c++;
            }
            else
            {
                if(c==0)
                    break;
                else
                    i++;
            }
            c=0;
        }
    }
    len=s.size();
    return len;
}
int main()
{
    string a;
    getline(cin,a);
    int i=fun(a);
    if(i%2==0)
        cout<<"CHAT WITH HER!";
    if(i%2!=0)
        cout<<"IGNORE HIM!";
}
