#include <stdio.h>
#include <vector>
#include<iostream>
#include <math.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, res = 0;
        while(i < j) {
            res = height[i] < height[j] ? 
                max(res, (j - i) * height[i++]): 
                max(res, (j - i) * height[j--]); 
        }
        return res;
    }
};

int main(int argc, char *argv[])
{
	vector<int> nums = {1,2,3,2,4};
	
	Solution solution;
	int ret = solution.maxArea(nums);
	cout << ret;
	return 0;
}