class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        if len(nums)%2 == 1:
            nums.append(0)
        for i in range(0, len(nums) - 1, 2):
            if(nums[i]!=nums[i+1]):
                return nums[i]
