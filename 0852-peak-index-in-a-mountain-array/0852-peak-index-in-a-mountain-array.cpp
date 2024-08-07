class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int n=arr.size();
        int right=n-1;
        while(left<right){
            int mid=(left+right)/2;
            if(arr[mid]>arr[mid+1]){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};