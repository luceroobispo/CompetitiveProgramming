#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,k;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>k;
    int arr[5]={a,b,c,d,e};
    int compare=0;
    bool sdistance=true;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i!=j){
                compare = arr[i] -arr[j];
                if(compare>k){
                    sdistance=false;
                    break;
                }
            }
        }
        if(!sdistance) break;
    }
    if(!sdistance) cout<<":(";
    else cout<<"Yay!";
    return 0;
}
