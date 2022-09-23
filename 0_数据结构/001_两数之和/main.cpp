#include<stdio.h> 
#include<iostream>
#include <vector>
#include <unordered_map> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		// return nums.size();
        unordered_map<int,int> hashtable;
        for(int i = 0; i<nums.size();++i){
            // 查找以 key 为键的键值对，如果找到，则返回一个指向该键值对的正向迭代器；
            // 反之，则返回一个指向容器中最后一个键值对之后位置的迭代器（如果 end() 方法返回的迭代器）。
            auto it = hashtable.find(target - nums[i]);
            if(it != hashtable.end()){
                return {it->second,i};
            }
            // end() 返回指向容器中最后一个键值对之后位置的正向迭代器。
            hashtable[nums[i]]=i;
        }
        return {};
    }
};

int main(void)
{
	Solution solution;
	
	int a[8] ={1,2,3,4,5,6,7,8};
	vector<int> b (a,a+8); // 通过数组a的地址初始化，地址从0到5

	vector<int> c = solution.twoSum(b,10);
	for (auto i : c)
    std::cout << b[i] << ' ';
	return 0;
}