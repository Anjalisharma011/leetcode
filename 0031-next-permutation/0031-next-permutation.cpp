class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while( i>=0 && nums[i]>=nums[i+1]){
                i--;
        }
        
        if(i>=0){
        for(int j=n-1;j>=i;j--){
            if(nums[i]<nums[j]){
                swap(nums[i],nums[j]);
                break;
            }
        }
        }
        reverse(nums.begin()+i+1,nums.end());
    }
};