class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int low = 0;
        int n = nums.size()-1;
        return binarySearch(nums, low, n, target);
    }

    int binarySearch(vector<int>& arr, int low, int high, int x)
    {
        while(low<=high)
        {
            int mid = low + (high-low)/2;

            if(arr[mid]==x)
                return mid;

            else if(x>arr[mid])
                low = mid + 1;

            else
                high = mid - 1;
        }
        return low;
    }
};
