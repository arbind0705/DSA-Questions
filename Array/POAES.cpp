#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> answer(n, 1);

        int prefix = 1;
        for(int i = 0; i < n; i++){
            answer[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int i = n-1; i >= 0; i--){
            answer[i] *= suffix;
            suffix *= nums[i];
        }
        return answer;
    }
};

int main()
{
    vector<int> nums = {5, 3, 2, 7, 8, 2};
    int val = 5;

    Solution sol;

  vector<int> answer = sol.productExceptSelf(nums);

   
    
    for(int i = 0; i < answer.size(); i++){
    cout << "\nelements now " << answer[i] << endl;
   }
    return 0;
}