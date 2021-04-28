#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;
signed main(){
    const unsigned long long int M = 1000000007;
    unsigned long long int n;
    cin >> n;
    unsigned long long int result;
    if(n < 64){
        result = pow(2,n);
        cout.setf(ios::fixed);
        cout << setprecision(0) << result << endl;
    }
    else{
        unsigned long long int quotient = n / 63;
        unsigned long long int remainder = n % 63;
        unsigned long long int i = 1;
         // cout <<"Quotient : "  << quotient << endl;
        // cout << "Remainder : " << remainder << endl;
        for(int j = 0; j < quotient; j++){
            i = (i * ((unsigned long long int)(pow(2,63)) % M) % M); 
            // cout << "When j = " << j << " " <<"i = " << i << endl;
        }
        result = (i* ((unsigned long long int)(pow(2,remainder)) % M)) % M;
        cout.setf(ios::fixed);
        cout << setprecision(0) << result << endl;
    }
}