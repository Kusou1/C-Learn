#include <stdio.h>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2];
        for (int i = 0; i <= nums.size() - 3; i++)
        {
            int left = i + 1, right = n - 1;
            while (left < right)
            {
                int num = nums[i] + nums[left] + nums[right];
                if (num == target)
                    return target;
                else if (num < target)
                {
                    ans = abs(target - num) > abs(target - ans) ? ans : num;
                    left++;
                }
                else
                {
                    ans = abs(target - num) > abs(target - ans) ? ans : num;
                    --right;
                }
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[])
{
    vector<int> nums = {0, -1, 1, 2, 3, 4, 5, 6, 7};

    Solution solution;
    int ret = solution.threeSumClosest(nums,7);
    cout << ret;
    return 0;
}