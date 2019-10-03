Given a number N, print the number of set bits in the binary representation of this number.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int t,n,count;
    cin >> t;
    while(t-->0){
        cin >> n;
        count=0;
        while(n){
            n=n&(n-1);
            count++;
        }
        cout << count << endl;
    }
    
    
    return 0;
}
