class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
       int left=0;
        int n=nums.size();
        if(n==0){
            return {-1,-1};
        }
        int right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
         if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        ans.push_back(left);
        if(left>=n || nums[left]!=target){
            return {-1,-1};
        }
         left=0;
        right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
             if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
         
        }
        ans.push_back(right);
        return ans;
    }
};