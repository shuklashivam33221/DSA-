// 2570. Merge Two 2D Arrays by Summing Values
// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/submissions/1560949964/

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        vector<vector<int>> vec;
        int p1 = 0, p2 = 0;
        while (p1 < nums1.size() && p2 < nums2.size())
        {
            if (nums1[p1][0] == nums2[p2][0])
            {
                nums1[p1][1] += nums2[p2][1];
                vec.push_back(nums1[p1]);
                p1++;
                p2++;
            }
            else if (nums1[p1][0] > nums2[p2][0])
            {
                vec.push_back(nums2[p2]);
                p2++;
            }
            else
            {
                vec.push_back(nums1[p1]);
                p1++;
            }
        }
        while (p1 < nums1.size())
        {
            vec.push_back(nums1[p1]);
            p1++;
        }
        while (p2 < nums2.size())
        {
            vec.push_back(nums2[p2]);
            p2++;
        }
        return vec;
    }
};