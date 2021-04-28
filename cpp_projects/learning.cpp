#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
using namespace std;
int main(){ 
    // input =T ATCGGGA ,output = 3;
     
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char,int> umap;
    char char_array[n+1];
    strcpy(char_array,s.c_str());
    for(int i = 0; i < n; i++){
        umap[char_array[i]] += 1;
    }    
    /*for(int i = 0; i < char_array[n+1];i++){
        umap.insert({char_array[i], i});
    } */
    
    char temp = '#'; // default character never going to be initialized by input string 
    int temp_count = 0;

    // cout << "I am writing uaninitialized temp" << temp << endl;
    for(auto const &pair : umap){
        if(temp == '#'){
            temp = pair.first;
            temp_count = pair.second;
        }
        else if(temp_count <= pair.second){
            temp = pair.first;
            temp_count = pair.second;
        }
        
        
}
cout << temp_count << endl;
}