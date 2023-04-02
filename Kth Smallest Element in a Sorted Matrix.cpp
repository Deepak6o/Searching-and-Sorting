class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        //  int m = matrix.size(), n = matrix[0].size(); // For general, the matrix need not be a square
        // priority_queue<int> maxHeap;
        // for (int r = 0; r < m; ++r) {
        //     for (int c = 0; c < n; ++c) {
        //         maxHeap.push(matrix[r][c]);
        //         if (maxHeap.size() > k) maxHeap.pop();
        //     }
        // }
        // return maxHeap.top();

        int n=matrix.size();
        int x=matrix[0].size();
        priority_queue<int> m;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<x;++j)
            {
                m.push(matrix[i][j]);
                if(m.size()>k)
                {
                    m.pop();
                }
            }
            

        }
        return m.top();
    }
};
