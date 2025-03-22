//451. Sort Characters By Frequency
class Solution {
    public:
        string frequencySort(string s) {
            string str="";
            unordered_map<char,int>mpp;
            int n = s.length();
            for (int i = 0; i<n; i++)
            {
                mpp[s[i]]++;
            }
            multimap < int , char , greater<int>> sortedmpp;
            for (auto it:mpp)
            {
               sortedmpp.insert({it.second, it.first});
            }
            for (auto it : sortedmpp)
            {
                for (int i = 0; i<it.first; i++)
                {
                    str+=it.second;
                }
            }
            return str;
        }
    };