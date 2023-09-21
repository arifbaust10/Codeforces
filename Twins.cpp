#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int ar[n],br[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum=sum+ar[i];
    }
    int sum1=0,j,div = sum/2;
    sort(ar, ar + n);
    for(int i=0;i<n;i++){
        br[n-(i+1)]=ar[i];
    }
    for(j=0;j<n;j++){
        sum1=sum1+br[j];
        if(sum1>div)
        {
            cout<<j+1;
            break;
        }
    }
}