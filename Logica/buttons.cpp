#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int max=0, result1=0,result2=0, result3=0;
    result1=a + (a-1);
    result2=b+(b-1);
    result3=a+b;
    if(result1>=result2 && result1>=result3) max=result1;
    else if(result2>=result1 && result2>=result3) max=result2;
    else max=result3;
    cout<<max;
    return 0;
}
