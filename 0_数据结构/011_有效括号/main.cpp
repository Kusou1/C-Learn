#include <stdio.h>
#include <vector>
#include<iostream>
#include <math.h>
#include <unordered_map>
#include <stack>
#include <string>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if (n % 2 == 1) {
            return false;
        }

        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        stack<char> stk;
        for (char ch: s) {
            // 判断哈希表中是否存在这个char，有的话就是右边的
            if (pairs.count(ch)) {
                // 如果栈顶不是与当前char对应的，则返回false
                if (stk.empty() || stk.top() != pairs[ch]) {
                    return false;
                }
                // 反之取出
                stk.pop();
            }
            // 如果没有，是左边的，则放进栈中
            else {
                stk.push(ch);
            }
        }
        // 如果栈中为空则为true，非空为false
        return stk.empty();
    }
};


int main(int argc, char *argv[])
{
	string str ="{}}";
	
	Solution solution;
	bool ret = solution.isValid(str);
    cout <<ret;
	return 0;
}