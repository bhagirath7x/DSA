class Solution {
public:

    bool isvalid(vector<int>& nums, int k, int n, int maxAllowedPages){
        int student = 1, pagesToAllot = 0;

        for(int i=0;i<n;i++){
            if(nums[i] > maxAllowedPages){
                return false;
            }
            if(nums[i] + pagesToAllot <= maxAllowedPages){
                pagesToAllot += nums[i];
            }else{
                student++;
                pagesToAllot = nums[i];
            }
        }
        return student <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n){
            return -1;
        }

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        int ans = -1;
        int st = 0, end = sum;

        while(st <= end){
            int mid = st + (end - st)/2;

            if(isvalid(nums,k,n,mid)){
                ans = mid;
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }
};