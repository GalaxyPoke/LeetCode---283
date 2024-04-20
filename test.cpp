#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int cur = 0, dest = -1; cur < nums.size(); cur++) //���ó�ʼ����
        {
            if (nums[cur] != 0) //�������Ԫ��
            {
                swap(nums[dest + 1], nums[cur]); //����Ԫ���ᵽǰ��
                dest++;
            }
        }
    }
};

int main()
{
    Solution so1; // ����һ�� Solution ����
    vector<int> nums = { 0, 1, 0, 3, 12 }; // ����һ�� vector ����ʼ��
    so1.moveZeroes(nums);

    for (auto e : nums)
    {
        cout << e << " ";
    }
    return 0;
}