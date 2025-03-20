//LONGEST COMMON PREFIX
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
            bool flag=0;
            int index=-1;
            int x=strs[0].size();
            for(int i=0;i<x;i++){
                for(int j=1;j<n;j++){
                    if(strs[0][i]!=strs[j][i]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
                index++;
            }
            return strs[0].substr(0,index+1);
        }
    };