#include<iostream>
#include<string.h>
using namespace std;
 
int contain(string a){
    int c=0,len = a.size();
    if(len<=7)
        return 0;
    
    else{
        for(int i=0;i<len;i++){
            for(int j=i;j<i+7;j++){
                if(a[i] == a[j]){
                    c++;
                    if(c==7)
                        return 1;
                }
                else
                    break;
            }
            c=0;
        }
    }
    return 0;
}
int main(){
 
    string a;
    cin>> a;
 
    int k = contain(a);
    if(k){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
}