#include <stdio.h>
#include <vector>
#include<iostream>
#include <math.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > res;
        int i,j,left,right,_size = nums.size();
        if (_size < 4) return res;          
        for (i = 0; i <= _size-4; i++)    
        {
            if (i > 0 && nums[i] == nums[i-1])  continue;
            for(j = i+1;j<=_size-3;j++){
                if (j > i+1 && nums[j] == nums[j-1])  continue;
                 left = j + 1;
                 right = _size - 1;
                while (left < right)
                {
                    if (nums[i]+nums[j]-target>-(nums[left]+nums[right])){
                        right--;
                    }
                    else if (nums[i]+nums[j]-target<-(nums[left]+nums[right])){
                        left++;
                    }
                    else
                    {
                        res.push_back({nums[i],nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left+1])  left++;
                        while (left < right && nums[right] == nums[right-1])    right--;
                        left++;
                        right--;
                    }
                }
            }
        }
        return res;
    }
};

int main(int argc, char *argv[])
{
	vector<int> nums = {-3,-1,0,2,4,5};
	
	Solution solution;
	vector<vector<int>> ret = solution.fourSum(nums,0);
	for (int i = 0; i <ret.size(); i++)
    {
        for (int j = 0; j <4; j++)
            cout <<ret[i][j];
        cout<<endl;
    }
	return 0;
}