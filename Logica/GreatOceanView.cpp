#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool band=false;
    int  cont=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(arr[i]>=arr[j]&&band==false){
                band=false;
            }
            else band=true;
        }
        if(!band) cont++;
        band=false;
    }
    cout<<cont;
    return 0;
}
