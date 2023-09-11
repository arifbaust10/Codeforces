#include<iostream>
using namespace std;
int main(){
    int i,t;
    long long u,v;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>u>>v;
        u=u*u;
        v=v*v;
        cout<<-u<<" "<<v<<endl;
    }

}