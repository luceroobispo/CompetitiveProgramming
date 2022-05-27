#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int max=0, result1=0,result2=0, result3=0;
    result1=a + (a-1);
    result2=b + (b-1);
    result3=a + b;
    if(result1>=result2 && result1>=result3) max=result1;
    else if(result2>=result1 && result2>=result3) max=result2;
    else max=result3;
    cout<<max;
    return 0;
}

/*
Problem Statement:
There are two buttons, one of size AA and one of size BB.
When you press a button of size XX, you get XX coins and the size of that button decreases by 11.
You will press a button twice. Here, you can press the same button twice, or press both buttons once.
At most how many coins can you get?

Constraints:
All values in input are integers.
3 <= A, B≤20

Input:
Input is given from Standard Input in the following format:
A B

Output:
Print the maximum number of coins you can get.

Sample 1:
INPUT   OUTPUT
5 3     9
You can get 5 + 4 = 9 coins by pressing the button of size 55 twice, and this is the maximum result.
Sample 2:
INPUT   OUTPUT
3 4     7

INPUT   OUTPUT
6 6     12
*/
