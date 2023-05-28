#include<bits/stdc++.h>
using namespace std;
int fun(int k)
{
    int i,j,m,c=0;
    vector<int> a;
    if(k%2!=0)
        return 0;
    else
    {
        m=k/2;
        if(m%2==0)
            return 1;
        else{
            for(i=2;i<=k;i++)
            {
                if(i%2==0)
                    a.push_back(i);
            }
            int len=a.size();
            for(i=0;i<len;i++)
            {
                 for(i=0;j<len;j++)
                {
                    if(a[i]+a[j]==k)
                    {
                        return 1;
                        c++;
                    }

                }
            }
            if(c==0)
                return 0;
        }

    }
}
int main()
{
    int w;
    cin>>w;
    int result=fun(w);
    if(result)
        cout<<"YES";
    else
        cout<<"NO";

}
