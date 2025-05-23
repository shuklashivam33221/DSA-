// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/submissions/1620437703/

class Solution {
    public:
        int minBitFlips(int start, int goal) {
            int num = start^goal;
            int count = 0;
            while(num)
            {
                if(num&1==1) count++;
                num = num>>1;
            }
            return count;
        }
    };