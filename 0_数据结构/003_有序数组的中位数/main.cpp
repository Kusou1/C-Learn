#include <stdio.h>
#include <vector>
#include<iostream>
using namespace std;

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // 定义 i j 2个指针分别指针2个数组
        // 定义 l r 分别用来保存中位数；奇数个，只会用到 l 变量；偶数，会用到 l r 变量
        int m = nums1.size(), n = nums2.size(), i = 0, j = 0, l = 0, r = 0;
        for (int x = 0; x <= (m + n) / 2; x++) {
            l = r;
            // r = (i < m && (j >= n || nums1[i] < nums2[j])) ?
            //     nums1[i++] : nums2[j++];
			if(i<m){
				if(j >= n || nums1[i] < nums2[j]){
					r=nums1[i++];
				}else{
					r=nums2[j++];
				}
			}else{
				r=nums2[j++];
			}
        }
		// &1表示当m+n长度相加等于1时候
        return (m + n) & 1 ? r : (l + r) / 2.0;
    }
};


int main(int argc, char *argv[])
{
	vector<int> nums1 = { 2,3, 5 };
	vector<int> nums2 = { 1,4,7, 9 };
	
	Solution solution;
	double ret = solution.findMedianSortedArrays(nums1, nums2);
	cout << ret;
	return 0;
}