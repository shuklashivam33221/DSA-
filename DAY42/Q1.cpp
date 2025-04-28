// https://leetcode.com/problems/single-number/description/

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int d = nums.size();
            int a = 0;
            for (int i = 0; i<d; i++)
            {
                a = a^nums[i];
            }
            return a;
        }
    };