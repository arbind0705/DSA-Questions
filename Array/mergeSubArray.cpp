#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;

        result.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++)
        {
            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];

            int lastEnd = result.back()[1];

            if (currentStart <= lastEnd)
            {
                result.back()[1] = max(lastEnd, currentEnd);
            }
            else
            {
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18},{16,20}};
    int val = 5;

    Solution sol;

    vector<vector<int>> answer = sol.merge(intervals);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j];

            if (j != answer[i].size() - 1)
                cout << ",";
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}