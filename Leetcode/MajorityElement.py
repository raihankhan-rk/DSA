class Solution:
    def majorityElement(self, nums: List[int]) -> int:

        nums.sort()
        c = 1

        if len(nums) == 1:
            return nums[0]

        for i in range(1, len(nums)):
            if nums[i-1] != nums[i]:
                c = 1
            
            else:
                c=c+1
                if(c>int((len(nums))/2)):
                    return nums[i]
