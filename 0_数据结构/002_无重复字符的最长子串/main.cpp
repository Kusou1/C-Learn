#include<stdio.h> 
#include<iostream>
#include <vector>
#include <unordered_map> 
#include <unordered_set>
#include <string>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 哈希集合，记录每个字符是否出现过
        unordered_set<char> occ;
        int n = s.size();
        // 右指针，初始值为 -1，相当于我们在字符串的左边界的左侧，还没有开始移动
        int rk = -1, ans = 0;
        // 枚举左指针的位置，初始值隐性地表示为 -1
        for (int i = 0; i < n; ++i) {
            // 4.有重复值，进入到下一层循环
            if (i != 0) {
                // 5.左指针向右移动一格，移除一位字符
                // 6.如果在下面的循环还是有相同的字符则又删除
                occ.erase(s[i - 1]);
            }
            // 1.右指针不越界，且occ中没有和s[rk + 1]一样的值
            while (rk + 1 < n && !occ.count(s[rk + 1])) {
                // 2.不断地移动右指针
                // 3.直到有重复值时跳出循环，进到下个循环
                occ.insert(s[rk + 1]);
                ++rk;
            }
            // 第 i 到 rk 个字符是一个极长的无重复字符子串
            ans = max(ans, rk - i + 1);
        }
        return ans;
    }
};

int main(void)
{
	Solution solution;
	
    string str1 = "abcdabc";

	int ans = solution.lengthOfLongestSubstring(str1);
    cout <<  ans;
	return 0;
}