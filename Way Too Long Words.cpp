#include<bits/stdc++.h>
using namespace std;
void cal(string sr)
{
    int len=sr.size();
    if(len>10)
    {
        cout<<sr[0]<<len-2<<sr[len-1]<<endl;
    }
    else
    {
        cout<<sr<<endl;
    }
}
int main()
{
    string s;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        cal(s);
    }
}
