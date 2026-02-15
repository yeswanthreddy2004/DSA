class Solution {
public:
    string reversePrefix(string s, int k) {
        // string str="";

        reverse(s.begin(),s.begin()+k);
        return s;

        // for(int i=0;i<k;i++)
        // {
        //     str+=s[i];
        // }
        // reverse(str.begin(),str.end());
        // for(int i=k;i<s.length();i++)
        // {
        //     str+=s[i];
        // }
        // return str;
    }
};