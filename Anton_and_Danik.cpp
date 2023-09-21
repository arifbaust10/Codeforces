#include<iostream>
using namespace std;
int main(){
    int n,a=0,d=0;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
        if(ch[i]=='A')
            a++;
        else
            d++;
    }

    if(a>d){
        cout<<"Anton";
    }
    else if(a==d)
        cout<<"Friendship";
    else
        cout<<"Danik";

}