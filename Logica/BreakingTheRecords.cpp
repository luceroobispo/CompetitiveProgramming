#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int h=0,l=0;
    int conth=0, contl=0;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++){
        if(i==0) {
            h=arr[i];
            l=arr[i];
        }
        else{
            if(arr[i]>h){
                h=arr[i];
                conth++;
            }
            if(arr[i]<l){
                l=arr[i];
                contl++;
            }
        }
    }
    cout<<conth<<" "<<contl;
    return 0;
}
