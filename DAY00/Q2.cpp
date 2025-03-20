//217. Contains Duplicate
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            int d = nums.size();
            sort(nums.begin(),nums.end());
            for (int i = 1; i<d; i++)
            {
                if (nums[i]==nums[i-1]) return true;
            }  
            return false;
        }
    };
    