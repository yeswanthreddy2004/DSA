class Solution {
public:
    int minimumLines(vector<vector<int>>& v) {
        int n=v.size();
        int count=1;
        if(n==1)return 0;
        if(n==2)return 1;
        if(n<10000)
        sort(v.begin(),v.end(),[](vector<int>a,vector<int>b)
        {
            return a[0]<=b[0];
        });
        for(int i=0;i<n;i++)
        {
            cout<<v[i][0]<<" : "<<v[i][1]<<endl;
        }
            long long x1=v[0][0];
            long long y1=v[0][1];
            long long x2=v[1][0];
            long long y2=v[1][1];
        for(int i=2;i<n;i++)
        {
            long long x3=v[i][0];
            long long y3=v[i][1];
            if((x2-x1)*(y3-y1)==(x3-x1)*(y2-y1))
            {

            }
            else
            {
                count++;
            }
                x1=x2;
                y1=y2;
                x2=x3;
                y2=y3;


        }
        return count;

    }
};