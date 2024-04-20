#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int cur = 0, dest = -1; cur < nums.size(); cur++) //设置初始条件
        {
            if (nums[cur] != 0) //处理非零元素
            {
                swap(nums[dest + 1], nums[cur]); //非零元素提到前面
                dest++;
            }
        }
    }
};

int main()
{
    Solution so1; // 创建一个 Solution 对象
    vector<int> nums = { 0, 1, 0, 3, 12 }; // 定义一个 vector 并初始化
    so1.moveZeroes(nums);

    for (auto e : nums)
    {
        cout << e << " ";
    }
    return 0;
}