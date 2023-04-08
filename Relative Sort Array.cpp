class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // vector<int> ans;
        // for(int i=0;i<arr2.size();i++)
        // {
        //     for(int j=0;j<arr1.size();j++)
        //     {
        //         if(arr2[i]==arr1[j])
        //         {
        //             ans.push_back(arr1[j]);
        //             arr1[j]=-1;
        //         }
        //     }
        // }
        // sort(arr1.begin(),arr1.end());
        // for(int i=0;i<arr1.size();i++)
        // {
        //     if(arr1[i]!=-1)
        //     {
        //         ans.push_back(arr1[i]);
        //     }
        // }
        // return ans;
        map<int,int>m;
        for(int i=0;i<arr1.size();i++)
        {
            m[arr1[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<arr2.size();i++)
        {
            int freq=m[arr2[i]];
            while(freq)
            {
                ans.push_back(arr2[i]);
                freq--;
            }
            m[arr2[i]]=0;
        }
        for(auto i = m.begin();i!=m.end();i++)
        {
            int val=i->first;
            int freq=i->second;
            while(freq)
            {
                ans.push_back(val);
                freq--;
            }
            i->second=0;
        }
        return ans;
    }
};
