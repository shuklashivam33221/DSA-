//1929. Concatenation of Array
class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            int d = nums.size();
            for (int i = 0; i<d; i++)
            {
                nums.push_back(nums[i]);
            }
            return nums;
        }
    };