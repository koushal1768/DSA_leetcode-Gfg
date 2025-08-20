class Solution {
public:
    int numSplits(string s) {
        unordered_map<int,int>A;
        unordered_map<int,int>B;
        for(char ch:s)
        {
            B[ch-'a']++;
        }
         int count=0;
        for(char ch:s)
        {
            B[ch-'a']--;
            if(!B[ch-'a']){B.erase(ch-'a');}
            A[ch-'a']++;
            if(A.size()==B.size())
             {
                count++;
                }
        }
        cout<<B.size();
        return count;
    }
};