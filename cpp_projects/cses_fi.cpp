#include <bits/stdc++.h>
using namespace std;
int main(){
    //input: 5 = n , 3, 2, 5,1,7 , output: 5
  /*
  int n;
  cin >> n;
  vector<int> v;
  for(int i =0; i < n; i++){
      cin >> i;
      v.push_back(i);
  }
  int ans = 0;
  for(int i = 1; i < n; i++){
      if()
  }
  */







    //Solution for Missing Numbers 

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    long long arr[n-1];
    for (int i = 0; i< n-1 ; i++){
        cin >> arr[i];
    }
    vector<long long> v;
    vector<long long>::iterator it;
    long long len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len; i++){
        long long m = n - arr[i];
        v.push_back(m);
    }
    //cout << "numbers found below :" << endl;
    for(int i = 0; i <= v.size(); i++){
       it = find(v.begin(),v.end(), i);
        if(it != v.end()){
           //cout << v.at(i) << endl;
           
        }
        else{ 
            cout << n-i <<  endl;
        }
    } 
}
