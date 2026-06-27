#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i =0; i < prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            } else {
                int profit = prices[i] - minPrice;
                if(profit > maxProfit){
                    maxProfit = profit;
                }
            }
        }
        return maxProfit;
    }
};
int main()
{
    vector<int> nums = {5, 3, 2, 7, 8, 2, 3, 1};
    int val = 5;

    Solution sol;

    int k = sol.maxProfit(nums);

   
    
    cout << "\nNumber of elements remaining: " << k << endl;

    return 0;
}