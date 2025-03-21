//1614. Maximum Nesting Depth of the Parentheses
class Solution {
    public:
        int maxDepth(string s) {
            int level = 0;
            int maxx = 0;
            for (int i = 0; i<s.length(); i++)
            {
                if(s[i]=='(') level++;
                maxx = max(maxx,level);
                if (s[i]==')') level--;
            }
            return maxx;
        }
    };