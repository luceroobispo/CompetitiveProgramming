#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int cont=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<=n-1;i++){
        if(((arr[i-1]< arr[i] && arr[i]<arr[i+1])||(arr[i-1]>arr[i] && arr[i]>arr[i+1])) && i>0 && i<n-1){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
