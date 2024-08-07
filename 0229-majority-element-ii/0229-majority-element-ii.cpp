class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>count;
        vector<int>ans;
        int floor=(int)(n/3)+1;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        if(count[nums[i]]==floor){
         ans.push_back(nums[i]);  
        }
            if(ans.size()==2) break;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};