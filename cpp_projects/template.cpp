#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n,i;
    cin >> n;
    long long a[n];
    while (i < n && scanf("%lld", &a[i++]) == 1);
    long long min_move = 0;
    for(int i = 0; i < n; i++){
        if(i+1 < n){
            signed long long diff = a[i] - a[i+1];
            if(diff > 0){
                min_move += diff;
                a[i+1] += diff; 
            }
        }
    }
    cout << min_move << endl;
} 