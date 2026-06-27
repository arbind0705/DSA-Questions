#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }

        for(auto it : mpp){
            if(it.second > 1){
                return true;
            }
        }
       return false;
    }
};

int main()
{
    vector<int> nums = {5, 3, 2, 7, 8, 2};
    int val = 5;

    Solution sol;

    bool k = sol.containsDuplicate(nums);

   
    
    if(k == false){
        cout << "the array doesn't contain duplicates"<<endl;
    }else{
        cout << "Array contains duplicates"<<endl;
    }

    return 0;
}