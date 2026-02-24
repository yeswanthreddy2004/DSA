class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        int n=v.size();
        // map<pair<int,int>,pair<int,double>>mp;
      priority_queue<pair<double,pair<int,int>>>p;
        for(int i=0;i<n;i++)
        {
            int x=v[i][0];
            int y=v[i][1];
            double root=(x*x)+(y*y);
            // mp[{x,y}]=root;
            p.push({root,{x,y}});

        if(p.size()>k)
        p.pop();
        }

        // for(int i=0;i<)
        // vector<pair<pair<int,int>,double>>vec(mp.begin(),mp.end());
        // sort(vec.begin(),vec.end(),[](pair<pair<int,int>,double>a,pair<pair<int,int>,double>b)
        // {
        //     return a.second<=b.second;
        // });
        
      vector<vector<int>>vv;
     while(!p.empty())
     {
        vv.push_back({p.top().second.first,p.top().second.second});
        p.pop();
     }
      return vv;
    }
};