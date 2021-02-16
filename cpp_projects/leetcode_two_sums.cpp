#include <iostream>
#include <unordered_map>
#include <iterator>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        for(int i = 0; nums.size(); i++){
            int complement = target - nums[i];
            vector<int> result;
            unordered_map<int,int>::const_iterator iter = myMap.find(complement); //unordered_map<char,int>::const_iterator got = umap.find (tolower(char_array[a]));
            if(iter != myMap.end()){
                cout << iter->second << "\n";
                cout  << i << "\n";                
                result.push_back(iter->second);
                result.push_back(i);
                return result;
            }
            myMap.insert(pair<int,int>(nums[i],i));
        }
        cout << "No two sum solution" << "\n";
    }
    int main(){
        vector<int> sumVector;
        int input;
        int target;
        cout << "Plz enter target thx " << '\n';
        cin >> target;
        cout << "Plz enter array int elems " << '\n'; 
        while(cin >> input){
            sumVector.push_back(input);
        }
        twoSum(sumVector,target);
    }
