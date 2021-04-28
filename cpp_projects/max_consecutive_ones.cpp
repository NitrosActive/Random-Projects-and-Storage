#include <bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    sync
    int count = 0,res = 0;
    int arr[4] = {1,0,1,1};
    for(int i = 0; i < 4; i++){
        if(arr[i] == 1){
            count++;
            res = max(res,count);
        }
        else if(arr[i] == 0){
            count = 0;
        }
    }
    cout << res << endl;
}

