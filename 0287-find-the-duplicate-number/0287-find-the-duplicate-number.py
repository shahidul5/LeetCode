class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        repeated = 0;
        nums.sort()
        for num in nums:
            if(num == repeated):
                return num
            else:
                repeated = num