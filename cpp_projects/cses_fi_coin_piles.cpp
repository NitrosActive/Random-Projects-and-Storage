#include <bits/stdc++.h>
using namespace std;
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define ll long long 
int main(){
    sync
    ll t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ll mn = min(a,b);
        ll mx = max(a,b);
        int c = mx - mn;
        mn -= c;
        mx -= 2*c;
        if(mn == 0 || (mn > 0 && mn % 3 == 0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}