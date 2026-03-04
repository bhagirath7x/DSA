class Solution {
public:
    void helper(vector<int>& arr, int start, int mid, int end) {
        vector<int>temp(end-start+1);
        int left = start, right = mid+1, idx = 0;
        while(left <= mid && right <= end) {
            if(arr[left] <= arr[right]) {
                temp[idx] = arr[left];
                idx++, left++;
            }
            else {
                temp[idx] = arr[right];
                idx++, right++;
            }
        }
        while(left <= mid) {
            temp[idx] = arr[left];
            idx++, left++;
        }
        while(right <= end) {
            temp[idx] = arr[right];
            idx++, right++;
        }
        idx = start;
        for(int i = 0; i < temp.size(); i++) {
            arr[idx] = temp[i];
            idx++;
        }
    }
    void mergeSort(vector<int>& arr, int start, int end) {
        if(start == end) return;
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        helper(arr, start, mid, end);
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < nums2.size(); i++) {
            nums1[m+i] = nums2[i];
        }

        mergeSort(nums1, 0, nums1.size()-1);
    }
};