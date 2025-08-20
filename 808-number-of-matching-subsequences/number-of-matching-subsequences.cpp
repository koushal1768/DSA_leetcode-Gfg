class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<int>chvec[26];
        int n=words.size();
        cout<<n;
        for(int i=0; i<s.length(); i++)
        {
            chvec[s[i]-'a'].push_back(i);
        }
        int count=0;
        for(auto &word:words)
        {   bool ok=1;
            int index=-1;// prev
           for(char c:word)
            { int ch=c-'a';
              const auto& vec=chvec[ch];
auto it = std::upper_bound(vec.begin(), vec.end(), index);

            
                if(it==vec.end())
                {
                   ok=0;
                   break;
                }
                index=*it;
               
            }
            if(ok) count++;
        }
        return count;
    }
};
 
