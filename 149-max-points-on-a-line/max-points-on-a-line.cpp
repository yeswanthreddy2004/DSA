class Solution {
public:
    int maxPoints(vector<vector<int>>& v) {
        int n=v.size();
        if(n<=2)return n;
        int maxi=2;
        for(int i=0;i<n;i++)
        {
            int x1=v[i][0];
            int y1=v[i][1];
            for(int j=i+1;j<n;j++)
            {
            int count=2;
            int x2=v[j][0];
            int y2=v[j][1];
            for(int k=j+1;k<n;k++)
            {
                int x3=v[k][0];
                int y3=v[k][1];
                if((x2-x1)*(y3-y1)==(x3-x1)*(y2-y1))
                {
                    count++;
                }
            }
            maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};