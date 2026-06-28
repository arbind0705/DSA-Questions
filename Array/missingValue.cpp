#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expected = n * (n+1) / 2;
        int actual = 0;

        for (int num : nums){
            actual += num;
        }
        return expected - actual;
    }
};
int main()
{
    vector<int> nums = {1,2,3,4,0,};
    int val = 5;

    Solution sol;

    int k = sol.missingNumber(nums);

   
    
    cout << "\nmissing number is : " << k << endl;

    return 0;
}