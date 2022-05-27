#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int t;
    vector<int> arrc;
    int cont=0;
    while(cin>>t){
        int arr[5];
        for(int i=0;i<5;i++){
            cin>>arr[i];
            if(arr[i]==t) cont++;
        }
        arrc.push_back(cont);
        cont = 0;
    }
        
    for(int i=0;i<arrc.size();i++){
        cout<<arrc[i]<<endl;
    }
    return 0;
}
