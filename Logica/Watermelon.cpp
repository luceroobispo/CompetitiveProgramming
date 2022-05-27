#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w%2==0 && w>2) cout<<"YES"; //w>2 porque es la unica excepcion de numero par, dos numeros pares sumados no dan 2, 1!=par
    else cout<<"NO";
    return 0;
}
