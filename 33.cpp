class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k = nums.size();

        // Find pivot
        for(int i = nums.size() - 1; i > 0; i--) {
            if(nums[i - 1] > nums[i]) {
                k = i;
                break;
            }
        }

        int i = 0, j = k - 1;

        // Search left sorted portion
        if(target >= nums[0]) {
            while(i <= j) {
                int mid = i + (j - i) / 2;

                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] < target)
                    i = mid + 1;
                else
                    j = mid - 1;
            }
        }

        // Search right sorted portion
        else {
            i = k;
            j = nums.size() - 1;

            while(i <= j) {
                int mid = i + (j - i) / 2;

                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] < target)
                    i = mid + 1;
                else
                    j = mid - 1;
            }
        }

        return -1;
    }
};
