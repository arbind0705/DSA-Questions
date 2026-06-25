#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;

        sort(nums.begin(), nums.end());
        int expected = 1;
        int n = nums.size();

        for (int num : nums) {
            while (num > expected) {
                missing.push_back(expected);
                expected++;
            }

            if (expected == num) {
                expected++;
            }
        }

        while (expected <= n) {
            missing.push_back(expected);
            expected++;
        }

        return missing;
    }
};

int main() {
    vector<int> nums = {5, 3, 2, 7, 8, 2, 3, 1};

    Solution sol;
    vector<int> result = sol.findDisappearedNumbers(nums);

    cout << "Missing numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}