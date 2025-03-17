class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            map<vector<int>, int> mpp;
            int count = 0;
            for (int i = 0;i < dominoes.size();i++){
                if (dominoes[i][0] > dominoes[i][1]){
                    swap(dominoes[i][0], dominoes[i][1]);
                }
            }
            for (int i = 0;i < dominoes.size();i++){
                mpp[dominoes[i]]++;
            }
            for (auto it : mpp){
                count += (it.second) * (it.second - 1) / 2;
            }
            return count;
        }
    };