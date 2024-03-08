class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        count = 0;
        maximum = 0
        arr = [0] * 101
        for x in nums:
            arr[x] += 1
            if arr[x] > maximum:
                maximum = arr[x]
                count = maximum
            elif arr[x] == maximum:
                count += maximum;
        return count;