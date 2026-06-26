#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    vector<int> nums = {5, 3, 2, 7, 8, 2, 3, 1};
    int val = 5;

    Solution sol;

    int k = sol.removeElement(nums, val);

    cout<< "Array after removing " << val << ": ";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\nNumber of elements remaining: " << k << endl;

    return 0;
}