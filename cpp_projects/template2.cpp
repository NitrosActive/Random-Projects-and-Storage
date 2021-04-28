#include <bits/stdc++.h>
using namespace std;
//macros
typedef signed long long sll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
void kadaneAlgorithm(){
    // maximum sub_array_sum  in o(n) time. input: 8 ,{endl}, -1 2 4 -3 5 2 -5 -2 output: 10
    //otherwise known as the kadane algorithm
    sll best = 0, sum = 0,n;
    cin >> n;
    sll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int k = 0; k < n; k++){
        sum = max(arr[k],sum+arr[k]);
        best = max(best,sum);
    }
    cout << best << '\n';
    return;
}
void bubbleSort(){
    //bubble sort algorithm with o(n^2) time and sorts array by swapping consecutive elements 
    sll n;
    cin >> n;
    sll arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << "Swapped Array: ";
    for(int i = 0; i<n;i++){
        for(int j = 0; j < n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        cout << arr[i] << ' ';
    }
    return;
}
void sort_func(){
    //sorting using sort() array sorting
    
    sll n;
    cin >> n;
    sll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout <<"Sorted Array: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
    cout << "\n";
    
    
   //vector sorting 

    //string sorting
    
    string s = "Advitiya";
    sort(s.begin(),s.end());
    cout << s << '\n'; 
    // vector<pair> sorting
    
    vector<pair<int,int> > v;
    v.pb(mp(1,5));
    v.pb(mp(2,3));
    v.pb(mp(1,3));
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].f << "," << v[i].s << endl;
    }
    
   //vector<tuple sorting
}
void binarySearch_method1(){
    int n,t,x;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << "what num want to find in sorted array?" << endl;
    cin >> t;
    x = t;
    int a = 0, b = t-1;
    while(a <= b){
        int k = (a+b)/2;
        if(arr[k] == x){
            cout << "found at position " << k << " in arr" << endl;
        }
        if(arr[k] > x){
            b = k-1;
        }
        else{
            a = k+1;
        }
    }
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    //binary search works for sorted arrays or vectors
    // give size and nums of arr. then sort. the use binary search to find index of specific num
    binarySearch_method1();
    }
