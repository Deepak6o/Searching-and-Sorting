class Solution {
public:
    string frequencySort(string s) {
    
        map<char,int>map;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            map[s[i]]++;
        }
        vector<pair<int,char>> v;
        for(auto it: map)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string ans;
        for(auto val:v)
        {
            for(int i=0;i<val.first;i++)
            {
                ans.push_back(val.second);
            }
        }
        return ans;
    }
};
