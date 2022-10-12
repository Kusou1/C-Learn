#include <stdio.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <unordered_map>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int p = 0;
        int q = 1;
        while (q < nums.size())
        {
            if (nums[p] == nums[q])
            {
                q++;
            }
            else
            {
                if (q - p > 1)
                {
                    nums[p + 1] = nums[q];
                }
                p++;
            }
        }
        return p + 1;
    }
};

int main(int argc, char *argv[])
{
    vector<int> str = {1,2,3,4,5,6};

    Solution solution;
    int ret = solution.removeDuplicates(str);
    cout << ret;
    return 0;
}