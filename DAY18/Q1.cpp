// valid anagram
class Solution {
    public:
        bool isAnagram(string s, string t) {
            int a = 0;
            if(s.length()!=t.length()) return false;
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i = 0; i<s.length(); i++)
            {
                if(s[i]==t[i]) a=1;
                else{
                    a=0; 
                    break;
                }
            }
            if (a==1) return true;
            return false;
        }
    };