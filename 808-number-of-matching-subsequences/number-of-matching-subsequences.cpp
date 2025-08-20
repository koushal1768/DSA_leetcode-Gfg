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
 
//approach
//1) make an adjlist if int type of size 26 which store the index of char of string s just like char a will comes 2 times at index 2 and at index 6 then in adj[a]->2,6
//2) now iterate on each word in the vector words.
//3)take a 2 variable ok and index where index represent the index of the selected char of string s 
//3) now iterate on each char ch of selected word
//4)hum adj list m chechk karenge corresponding to that word that does any position is present which is greater than index if possible then we update the index check for the next word if not present then that word is not the part of that word so we direcly look for the another word because in that it is not possible
