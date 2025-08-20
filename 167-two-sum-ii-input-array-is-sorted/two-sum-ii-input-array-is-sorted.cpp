class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        if(j<1) return {};
        while(i<=j)
        {
            int abc=numbers[i]+numbers[j];
            if(abc==target) return{i+1,j+1};
            else if(abc>target) j--;
            else i++;
        }
       return {} ;
    }
};